def clc():
    pil1 = float(input("Masukkan nilai pertama: "))
    pil2 = float(input("Masukkan nilai kedua: "))
    return pil1, pil2

while True:
    print("Pilih program\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit")
    p = int(input("Masukkan Pilihan: "))

    if p == 5:
        print("Terima kasih, telah menggunakan kalkulator Ratna")
        break

    if 1 <= p <= 4:
        pil1, pil2 = clc()
        if p == 1:
            print(f"Hasil penjumlahan dari {pil1:.2f} dan {pil2:.2f} adalah {pil1 + pil2:.2f}")
        elif p == 2:
            print(f"Hasil pengurangan dari {pil1:.2f} dan {pil2:.2f} adalah {pil1 - pil2:.2f}")
        elif p == 3:
            print(f"Hasil perkalian dari {pil1:.2f} dan {pil2:.2f} adalah {pil1 * pil2:.2f}")
        elif p == 4:
            if pil2 != 0:
                print(f"Hasil pembagian dari {pil1:.2f} dan {pil2:.2f} adalah {pil1 / pil2:.2f}")
            else:
                print("Error: Pembagian dengan nol tidak diizinkan")
    else:
        print("Input anda salah, silahkan coba lagi")
