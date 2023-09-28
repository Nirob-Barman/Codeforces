N = int(input())

# A = []
# for x in input().split():
#     A.append(int(x))

# A = [int(x) for x in input().split()]
A = list(map(int, input().split()))

isPalindrome = True

for i in range(N//2):
    if A[i] != A[N-i-1]:
        isPalindrome = False
        break

if isPalindrome:
    print("YES")
else:
    print("NO")
