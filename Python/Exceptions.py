a = int(input())

for i in range(0,  a):
    n, m = input().split()
    try: 
        print(int(n) // int(m))

    except(ValueError, ZeroDivisionError) as error:
        print("Error Code:", error)