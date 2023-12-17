baris, kolom = map(int, input().split())
matriks = list(map(int, input().split()))
matriks = [matriks[i:i+kolom] for i in range(0, len(matriks), kolom)]

for i in range(baris):
    for j in range(kolom):
        print(matriks[i][j], end=" ")
    print()

