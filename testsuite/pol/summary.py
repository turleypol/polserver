import re
import os
import sys

print("# Pol test summary")
if not os.path.exists("log/pol.log"):
    print("no testrun")
    sys.exit(0)
content = None
with open("log/pol.log", "r") as file:
    content = file.readlines()
active_pkg=None
active_script=None
active_function=None
failed=None
end=None
lines=""
for line in content:
    m=re.match(r"\[.*\] (\w+) \(testpkgs/(\w+)/\)", line)
    if m is not None:
        active_pkg = m.group(2)
        print("|", active_pkg,"|","|","|","|","|","|")
        continue
    m=re.match(r"\[.*\]   Calling (\w+).ecl", line)
    if m is not None:
        active_script = m.group(1)
        print("|", "|",active_script,"|","|","|","|","|")
        continue
    m=re.match(r"\[.*\]     Calling (\w+)\.\.", line)
    if m is not None:
        active_function = m.group(1)
        continue
    m=re.match(r"\[.*\]     failed: (.*)", line)
    if m is not None:
        failed = m.group(1)
        continue
    m=re.match(r"\[.*\]     \.\.(.*)ms", line)
    if m is not None:
        print("|", "|","|",active_function,"|", failed if failed is not None else "ok", "|",m.group(1)+"ms","|",lines if failed is not None else '',"|")
        end = m.group(1)
        #print(f"- {active_pkg}/{active_script} : {active_function} {failed if failed is not None else 'ok'} {end}ms")
        failed = None
        lines=""
    else:
        lines+=line.rstrip()+"  \n"
