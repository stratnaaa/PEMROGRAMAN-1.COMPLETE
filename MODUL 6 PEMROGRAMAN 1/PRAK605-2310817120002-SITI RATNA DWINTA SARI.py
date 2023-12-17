n = int(input())
A = []
B = []
hasil = []

print("Matriks A")
for i in range(n):
    A.append(list(map(int, input().split())))

print("Matriks B")
for i in range(n):
    B.append(list(map(int, input().split())))

print("Matriks AXB:")
for i in range(n):
    hasil.append([0] * n)
    for j in range(n):
        for k in range(n):
            hasil[i][j] += A[i][k] * B[k][j]
        print(hasil[i][j], end=" ")
    print()
