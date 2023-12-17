for i in range(5):
    d = int(input())
    hr = d // 86400
    jm = (d // 3600) % 24
    mn = (d // 60) % 60
    dt = d % 60
    if hr >= 1:
        print(f"{hr} hari {jm:02d}:{mn:02d}:{dt:02d}")
    else:
        print(f"{jm:02d}:{mn:02d}:{dt:02d}")
