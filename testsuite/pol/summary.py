import re
import os
import sys

if not os.path.exists("log/pol.log"):
    print("no testrun")
    sys.exit(0)
content = None
with open("log/pol.log", "r") as file:
    content = file.readlines()
failed=None
lines=""
tests=0
fails=0
output="|pkg|script|function|result|duration|output|\n"
output+="|-|-|-|-|-|-|\n"
for line in content:
    line = line.rstrip()
    m=re.match(r"\[.*\] (\w+) \(testpkgs/(\w+)/\)", line)
    if m is not None:
        active_pkg = m.group(2)
        output+=f"|{active_pkg}| | | | | |\n"
        continue
    m=re.match(r"\[.*\]   Calling (\w+).ecl", line)
    if m is not None:
        active_script = m.group(1)
        output+=f"| |{active_script}| | | | |\n"
        continue
    m=re.match(r"\[.*\]     Calling (\w+)\.\.", line)
    if m is not None:
        active_function = m.group(1)
        lines=""
        continue
    m=re.match(r"\[.*\]       failed: (.*)", line)
    if m is not None:
        failed = m.group(1)
        dur="-"
        fails+=1
        fstr = ":x:"
        fout = lines+failed
    else: 
        m=re.match(r"\[.*\]     \.\.(.*)ms", line)
        if m is not None:
            dur = m.group(1)+"ms"
            fstr = ":white_check_mark:"
            fout = ""
    if m is not None:
        tests+=1
        output+=f"| | |{active_function}|{fstr}|{dur}|{fout}|\n"
        failed = None
        lines=""
    else:
        lines+=line+"<br/>"


print(f"<details><summary>{fails} tests failed out of {tests}</summary>")
print("")
print(output)
print("</details>")
