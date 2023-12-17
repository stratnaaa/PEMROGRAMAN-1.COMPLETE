for u in range(4):
    bil1, bil2 = map(int, input().split())

    for i in range(bil1, bil2 + 1):
        print(f"{i} {bil2 - (i - bil1)}", end="")
        if i < bil2:
            print(" - ", end="")
    
    for i in range(bil1, bil2 - 1, -1):
        print(f"{i} {bil2 - (i - bil1)}", end="")
        if i > bil2:
            print(" - ", end="")
    
    print()
