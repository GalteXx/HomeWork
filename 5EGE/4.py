for i in range (10000):
    x = bin(i)[2:]
    if i % 2 == 0:
        x += bin(str.count(x, '1'))[2:]
    else:
        x += '00'
        x = x[::-1]
        x += '1'
        x = x[::-1]
    if int(x, 2) < 1000:
        print(i)