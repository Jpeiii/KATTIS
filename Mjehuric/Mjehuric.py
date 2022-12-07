'''
https://open.kattis.com/problems/mjehuric
'''
array = input().split()
while True:
    swapped = False
    for i in range(1, len(array)):
        if int(array[i-1]) > int(array[i]):
            array[i-1], array[i] = array[i], array[i-1]
            swapped = True
            print(*array)
    if not swapped:
        break
