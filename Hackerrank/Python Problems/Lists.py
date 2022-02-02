if __name__ == '__main__':
    N = int(input())
    
    l = []
    
    for n in range(N):
        inputs = input()
        arr = inputs.split(" ")
        if arr[0] == "print":
            print(l)
        elif arr[0] == "append":
            l.append(int(arr[1]))
        elif arr[0] == "sort":
            l.sort()
        elif arr[0] == "pop":
            l.pop()
        elif arr[0] == "reverse":
            l.reverse()
        elif arr[0] == "remove":
            l.remove(int(arr[1]))
        elif arr[0] == "insert":
            i = int(arr[1])
            e = arr[2]
            l.insert(i, int(e))