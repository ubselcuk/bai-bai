n = int(input("İstediğiniz yüksekliği girin: "))
a = 0
while n > a:
    b = a
    while b >= 0:
        print("*",end="")
        b -= 1
    print("")
    a += 1