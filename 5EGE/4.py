for i in range(100, 1000):
    s1 = i // 100
    s2 = (i  % 100) // 10
    s3 = i % 10
    maxx = max(s1, s2, s3)
    minn = min(s1, s2, s3)
    mid = 0
    if(s1 != maxx and s1 != minn):
        mid = s1
    if(s2 != maxx and s2 != minn):
        mid = s2
    if(s3 != maxx and s3 != minn):
        mid = s3
    res = 0
    if minn != 0:
        res = (maxx*10 + mid) - (minn*10 + mid)
    if minn == 0 and mid != 0:
        res = (maxx*10+mid)-(mid*10+minn)
    if minn == 0 and mid == 0:
        res = 0
    if res == 60:
        print(i)
        break