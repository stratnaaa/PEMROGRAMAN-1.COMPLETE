kode = input().rstrip()
pesan = input().rstrip()

length = len(kode)
length2 = len(pesan)
bintang = 0
pagar = 0

if length == length2:
    for i in range(length):
        if kode[i] != pesan[i]:
            print("#", end="")
            pagar += 1
        elif kode[i] == ' ' and pesan[i] == ' ':
            print(" ", end="")
        else:
            print("*", end="")
            bintang += 1

    print("\n* =", bintang)
    print("# =", pagar)

    if bintang >= pagar:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")
else:
    print("Panjang kalimat berbeda, pesan palsu")
