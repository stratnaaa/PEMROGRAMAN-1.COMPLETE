def maksimal(a, b):
    if a > b:
        return a
    else:
        return b

def minimal(a, b):
    if a < b:
        return a
    else:
        return b

batas = 0
maks = -100000
minim = 100000

bilangan = int(input())
nilai = list(map(int, input().split()))

for i in range (batas, bilangan):
    maks = maksimal(maks, nilai[i])
    minim = minimal(minim, nilai[i])
    batas += 1
    
print(maks, minim)
