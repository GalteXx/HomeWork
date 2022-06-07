a = (2 * 343 ** 123 + 2401) * (3 * 343 ** 137 - 2401)
kol = 0
while a > 0:
    if a % 7 == 6:
        kol += 1
    a //= 7
print(kol)