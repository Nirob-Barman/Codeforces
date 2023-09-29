s = input()

balanceOfL = 0
splitCount = 0
currentSplit = ""
splits = []

for c in s:
    currentSplit += c
    if c == 'L':
        balanceOfL += 1
    else:
        balanceOfL -= 1

    if balanceOfL == 0:
        splitCount += 1
        # print(currentSplit)
        splits.append(currentSplit)
        currentSplit = ''

print(splitCount)
for split in splits:
    print(split)
