try:
    a = float(input("İlk sayıyı girin: "))
    b = float(input("İkinci sayıyı girin: "))
    islem = input("Yapmak istediğiniz işlemi girin(+,-,*,/): ")
    if islem == "+":
        print("Sonuç:",a+b)
    elif islem == "-":
        print("Sonuç:",a-b)
    elif islem == "*":
        print("Sonuç:",a*b)
    elif islem == "/":
        print("Sonuç:",a/b)
    else:
        print("Hatalı işlem girişi yaptınız!")
except ValueError:
    print("Hatalı sayı girişi yaptınız!")