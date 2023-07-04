t = int(input())
for i in range(t):
    l, r = map(int, input().split())
    num = l
    m = 0
    for j in range(l, r+1):
        s = str(j)
        if m == 9:
            break
        if m < int(max(s)) - int(min(s)):
            m = int(max(s)) - int(min(s))
            num = j
    print(num)
