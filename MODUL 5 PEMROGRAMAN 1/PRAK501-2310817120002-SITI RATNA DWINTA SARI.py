def max_bilangan(a1, b1, c1, d1):
    max = a1

    if b1 > max:
        max = b1

    if c1 > max:
        max = c1

    if d1 > max:
        max = d1

    return max

a, b, c, d = map(int, input().split())
hasil = max_bilangan(a, b, c, d)
print(hasil)
