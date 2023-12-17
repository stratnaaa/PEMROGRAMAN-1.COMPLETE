def biodata(tahun_lahir, A, B ):
    tahun_sekarang = 2020
    print("Perkenalkan Nama Saya:", A)
    print("Umur Saya:", tahun_sekarang - tahun_lahir)
    print("Saya Adalah Angkatan:", tahun_sekarang)
    print("Asal Saya Dari:", B)

tahun_lahir = int(input())
nama = input()
asal = input()
biodata(tahun_lahir, nama, asal)
