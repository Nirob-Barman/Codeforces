N = int(input())

A = list(map(int, input().split()))

minValue = min(A)
maxValue = max(A)

minIndex = A.index(minValue)
maxIndex = A.index(maxValue)

A[minIndex], A[maxIndex] = A[maxIndex], A[minIndex]

# print(A)
print(*A)
