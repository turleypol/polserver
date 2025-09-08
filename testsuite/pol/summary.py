import re
import os
import sys

path="log/pol.log"
if (len(sys.argv)>1):
    path=sys.argv[1]
if not os.path.exists(path):
    print("no testrun")
    sys.exit(0)
with open(path, "r") as file:
    content = file.readlines()
lines=""
tests=0
fails=0
output="|pkg|script|function|result|duration|output|\n"
output+="|-|-|-|-|-|-|\n"
res=[]
class Test:
    def __init__(self,name):
        self.name=name
        self.dur=""
        self.result = ":white_check_mark:"
        self.output=""
        self.sub=[]

curpkg=None
curscript=None
curfunc=None
for line in content:
    line = line.rstrip()
    m=re.match(r"\[.*\] (\w+) \(testpkgs/(\w+)/\)", line)
    if m is not None:
        res.append(Test(m.group(2)))
        curpkg=res[-1]
        continue
    m=re.match(r"\[.*\]\s+Calling (\w+).ecl", line)
    if m is not None:
        curpkg.sub.append(Test(m.group(1)))
        curscript = curpkg.sub[-1]
        continue
    m=re.match(r"\[.*\]\s+Calling (\w+)\.\.", line)
    if m is not None:
        curscript.sub.append(Test(m.group(1)))
        curfunc = curscript.sub[-1]
        lines=""
        continue
    m=re.match(r"\[.*\]\s+failed: (.*)", line)
    if m is not None:
        curfunc.result = ":x:"
        curfunc.output = lines + m.group(1)
        curfunc.dur = "-"
        curscript.result = ":x:"
        curpkg.result = ":x:"
        fails+=1
    else: 
        m=re.match(r"\[.*\]\s+\.\.(.*)ms", line)
        if m is not None:
            if not curfunc.dur:
                curfunc.dur = m.group(1)+"ms"
            elif not curscript.dur:
                curscript.dur = m.group(1)+"ms"
            elif not curpkg.dur:
                curpkg.dur = m.group(1)+"ms"
    if m is not None:
        tests+=1
        lines=""
    else:
        lines+=line+"<br/>"
for r in res:
    output+=f"|{r.name}| | |{r.result}|{r.dur}|{r.output}|\n"
    for s in r.sub:
        output+=f"| |{s.name}| |{s.result}|{s.dur}|{s.output}|\n"
        for f in s.sub:
            if f.name=="cleanup":
                continue
            output+=f"| | |{f.name}|{f.result}|{f.dur}|{f.output}|\n"
print(f"<details><summary>{fails} tests failed out of {tests}</summary>")
print("")
print(output)
print("</details>")
