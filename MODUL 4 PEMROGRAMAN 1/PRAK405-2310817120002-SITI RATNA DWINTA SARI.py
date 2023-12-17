for u in range(3):
    nil, klp = map(int, input().split())
    totalsm = 0

    for i in range(1, nil + 1):
        totbar = 0
        for a in range(i, 0, -1):
            hper = a * klp
            totbar += hper
            print(f"({a} * {klp})", end="")
            if a > 1:
                print(" + ", end="")
        totalsm += totbar
        print(f" = {totbar}")

    print(f"{totalsm}\n")
