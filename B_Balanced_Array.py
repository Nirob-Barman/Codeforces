t = int(input())

for _ in range(t):
    n = int(input())

    if n % 4 != 0:
        print("NO")
    else:
        print("YES")
        for i in range(2, n+1, 2):
            print(i, end=" ")
        for i in range(1, n-2, 2):
            print(i, end=" ")
        print(n+(n//2-1))
