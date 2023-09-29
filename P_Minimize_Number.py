n = int(input())

a = list(map(int, input().split()))

allEven = True
operations = 0

while True:
    for i in range(n):
        if a[i] % 2:
            allEven = False
            break
        a[i]//=2
    if allEven:
        operations += 1
    else:
        break

print(operations)
