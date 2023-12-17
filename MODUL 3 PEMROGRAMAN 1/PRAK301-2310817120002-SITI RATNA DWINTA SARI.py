for i in range(3):
    no1, no2 = map(int, input().split())
    
    if no1 >= no2:
        print(no2, no1)
    else:
        print(no1, no2)
