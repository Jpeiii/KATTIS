'''
https://open.kattis.com/problems/height
'''

P = int(input())

for _ in range(P):
    line = list(map(int, input().split()))
    K, H = line[0], line[1:]
    ans = 0
    n = 20
    for i in range(1, n):
        X = H[i]
        j = i-1
        while (j >= 0) and (H[j] > X):
            H[j+1] = H[j]
            j -= 1
            ans += 1
        H[j+1] = X
    print(K, ans)
