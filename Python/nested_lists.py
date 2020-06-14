students = []
for _ in range(int(input())):
    name =input()
    score = float(input())
    students.append([name,score])
    
stu = 0
stu = students[0]
minim = stu[1]
n_min = stu[0]
m = []
name = []
valor = 0

students.sort(key=lambda x: x[1])
lowest = students[0][1]
two_worst = [s for s in students if s[1] != lowest][:2]

if len(two_worst) > 1:
    if two_worst[0][1] == two_worst[1][1]:
        two_worst.sort(key = lambda x: x[0])
        for s in two_worst:
            print (s[0])
    else:
        print(two_worst[0][0])
else:
    print (two_worst[0][0])
