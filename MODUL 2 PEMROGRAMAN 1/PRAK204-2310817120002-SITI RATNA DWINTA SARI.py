import math
#input 1
jari2 = float (input())
tinggi = float (input())
v = 22/7 *(jari2**2) * tinggi
k = 2 * (22/7) * jari2 * (jari2 + tinggi)
l = 2 * (22/7) *jari2
print(f"Volume = {v:.2f}")
print(f"Luas = {k:.2f}")
print(f"Keliling = {l:.2f}")

#input 2
jr2,tinggi1 = map(float, input().split())
v1 = 22/7 * (jr2**2) * tinggi1
k1 = 2 * (22/7) * jr2 * (jr2+ tinggi1)
l1 = 2 * (22/7) *jr2
print(f"Volume = {v1:.2f}")
print(f"Luas = {k1:.2f}")
print(f"Keliling = {l1:.2f}")