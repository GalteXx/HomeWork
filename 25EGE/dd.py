def isPoly(ch):
    a = ''
    resCh = ch
    while ch > 0:
        a += str(ch % 10)
        ch //= 10
    return str(resCh) == int(a, 10)

for i in range(0, 10000):
    for j in range(0, 10):
        a = int('1' + str(i) + '586' + str(j) + '6', 10)
        b = ''
        sum = 0
        while a > 0:
            b += str(a % 10)
            sum += a % 10
            a //= 10
        if isPoly(int(b, 10)):
            print(a, sum)


str.count()