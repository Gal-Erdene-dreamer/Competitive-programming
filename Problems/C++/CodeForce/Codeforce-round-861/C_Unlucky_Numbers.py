t = int(input())

for i in range(t):
    l, r = map(int, input().split())
    min_diff = 9
    num = l
    for j in range(l, r+1):
        diff = int(max(str(j))) - int(min(str(j)))
        if diff < min_diff:
            min_diff = diff
            num = j
            if min_diff == 0:
                break
    print(num)
