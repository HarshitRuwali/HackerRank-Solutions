import re

a = int(input())

for i in range(0, a):
    raw = input()
    try:
         regex = re.compile(raw)
    except re.error:
        print(False)        
    else:
        print(True)
