n1, n2 = map(int, input().split())
if n1 != n2:
    print("Jumlah tidak sama")
else:
    b1 = list(map(int, input().split()))
    b2 = list(map(int, input().split()))

    for l in range(n1):
        print(b1[l] * b2[l], end=" ")
