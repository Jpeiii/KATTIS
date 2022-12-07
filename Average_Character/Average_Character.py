s = str(input())
print(chr((sum(ord(i) for i in s))//len(s)))
