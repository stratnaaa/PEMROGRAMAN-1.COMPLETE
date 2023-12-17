import math
#Input 1
t, simi = map(float, input().split()) 
a = round (math.sqrt(simi**2 - t**2))

#Output 1
print("Alas= ",a, "cm")
print("Tinggi= ",round(t), "cm")
print("Keliling= ",round (a + t + simi), "cm")
print("Luas= ", round (a * t / 2), "cm^2")

#Input 2
t1 = float (input())
simi1 = float (input())
a1 = round (math.sqrt(simi1**2 - t1**2))

#Output
print("Alas= ",a1, "cm")
print("Tinggi= ",round(t1), "cm")
print("Keliling= ",round (a1 + t1 + simi1), "cm")
print("Luas= ",round (a1 * t1 / 2), "cm^2")

