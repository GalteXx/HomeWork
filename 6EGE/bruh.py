def fu(s):
    n = 0
    while s < s*s:
        s -= 1
        n += 3
    return n


for i in range(5, 20000):
    if fu(i) > 2000:
        print(i)
        break