for i in range(5):
    a = int(input())
    if a == 0:
        print("Nol")
    elif 1 <= a <= 9:
        print("Satuan")
    elif 10 <= a <= 19:
        print("Belasan")
    elif 20 <= a < 100:
        print("Puluhan")
    else:
        print("Anda Menginput Melebihi Limit Bilangan")

