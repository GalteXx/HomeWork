for i in range(1, 1000):
    ch = i
    if ch/100 * ch / 10 % 10 == 12 and ch / 10 % 10 * ch % 10:
        print(i)
