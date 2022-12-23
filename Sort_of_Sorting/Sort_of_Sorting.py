num = -1
while num != 0:
    num = int(input())
    if num == 0:
        break
    names = []
    for _ in range(num):
        name = input()
        names.append(name)
    names.sort(key=lambda x: x[:2])
    for name in names:
        print(name)
    print()
