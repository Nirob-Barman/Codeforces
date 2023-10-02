def isMagical(number):
    for digit in number:
        if digit != '1' and digit != '4':
            return False

    if number[0] == '4':
        return False

    if '444' in number:
        return False

    return True


number = input()

if isMagical(number):
    print("YES")
else:
    print("NO")
