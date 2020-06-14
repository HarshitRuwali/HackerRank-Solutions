if __name__ == '__main__':
    N = int(input())
    
    list = []
    
    for i in range(N): 
        option = input().split()
        if option[0] == 'print':
            print(list)
        elif option[0] == 'sort':
            list.sort()
        elif option[0] == 'remove':
            list.remove(int(option[1]))
        elif option[0] == 'append':
            list.append(int(option[1]))
        elif option[0] == 'insert':
            list.insert(int(option[1]),int(option[2]))
        elif option[0] == 'reverse':
            list.reverse()
        elif option[0] == 'pop':
            list.pop()
