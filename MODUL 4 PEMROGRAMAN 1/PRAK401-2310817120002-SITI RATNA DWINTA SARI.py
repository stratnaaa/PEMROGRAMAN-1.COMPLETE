for i in range(3):
    klp, simbol = input().split()
    klp = int(klp)
    for j in range(1, 51):
        if j % klp == 0:
            print(simbol, end=" ")
        else:
            print(j, end=" ")
    print()
