t = int(input())

for i in range(t):
    a, b, c, d = map(int, input().split())
    greaterCount = (b > a)+(c > a)+(d > a)
    print(greaterCount)
