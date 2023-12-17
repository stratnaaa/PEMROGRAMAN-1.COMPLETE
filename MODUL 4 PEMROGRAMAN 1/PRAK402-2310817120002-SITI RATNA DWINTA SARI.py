for i in range(3):
    inp = int(input())

    for ganjil in range(1, inp + 1):
        if ganjil % 2 != 0:
            print(ganjil, end=" ")

    print()  
    for genap in range(inp, 1, -1):
        if genap % 2 == 0:
            print(genap, end=" ")

    print()  
