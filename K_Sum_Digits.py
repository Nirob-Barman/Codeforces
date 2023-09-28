n = int(input())

# digits as a string
digits = input()

sum = 0

for i in range(len(digits)):
    sum += int(digits[i])
print(sum)
