import re

content = None
with open("log/pol.log", "r") as file:
    content = file.readlines()
active_pkg=None
active_script=None
active_function=None
failed=None
end=None
for line in content:
    m=re.match(r"\[.*\] (\w+) \(testpkgs/(\w+)/\)", line)
    if m is not None:
        active_pkg = m.group(2)
        continue
    m=re.match(r"\[.*\]   Calling (\w+).ecl", line)
    if m is not None:
        active_script = m.group(1)
        continue
    m=re.match(r"\[.*\]     Calling (\w+)\.\.", line)
    if m is not None:
        active_function = m.group(1)
        print(f"{active_pkg}/{active_script}/{active_function}")
        continue
    m=re.match(r"\[.*\]     failed: (.*)", line)
    if m is not None:
        failed = m.group(1)
    m=re.match(r"\[.*\]     \.\.(.*)ms", line)
    if m is not None:
        end = m.group(1)
        print(f"- {active_pkg}/{active_script} : {active_function} {failed if failed is not None else 'ok'} {end}ms")
        failed = None
