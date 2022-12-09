tc = int(input())

for _ in range(tc):
    result = 0
    for i in range(2):
        num = int("".join(input().split()))
        result += num
    print(*list(str(result)))
