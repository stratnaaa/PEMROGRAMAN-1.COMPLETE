def hitung(nilai1, nilai2):
    hasil = abs(nilai1 - nilai2)
    return hasil

def mutlak(angka):
    return abs(angka)

a, c, b, d = map(int, input().split())
hasil = hitung(a, b) + hitung(c, d)
print(mutlak(hasil))
