angka = int(input())
matriks = list(map(int, input().split()))

for i in range(angka):
    matriks[i] = matriks[i] * (i + 1)

print(" ".join(map(str, matriks)))

