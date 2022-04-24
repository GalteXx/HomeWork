for i in range(2000):
    x = i
    k = x % 5
    a = 0
    b = 0
    while x > 0:
        d = x % 5
        if d == k:
            a += 1
        b += d
        x //= 5
    if a == 3 and b == 10:
        print(i)