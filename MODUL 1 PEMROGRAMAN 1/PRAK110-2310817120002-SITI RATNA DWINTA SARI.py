import math

alas = 5
tinggi = 12
#Mencari sisi miring menggunakan Rumus Pythagoras
simi = round (math.sqrt(alas**2 + tinggi**2))
#Keliling = jumalah dari semua sisi
kl = alas + tinggi + simi
#Luas = alas dikali tinggi dibagi 2
luas = round (alas * tinggi / 2)
print("Diketahui :")
print("Alas :", alas, "cm")
print("Tinggi :", tinggi, "cm")
print("\n" * 2)
print("Jawab :")
print("Sisi A =", tinggi, "cm")
print("Sisi B =", simi, "cm")
print("Sisi C =", alas, "cm")
print("Keliling =", kl, "cm")
print("Luas =", luas, "cm")