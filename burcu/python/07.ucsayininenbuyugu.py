a = int(input("İlk sayıyı girin: "))
b = int(input("İkinci sayıyı girin: "))
c = int(input("Üçüncü sayıyı girin: "))

if a>b and a>c:
    print("En büyük sayı {}'dır.".format(a))
elif b>a and b>c:
    print("En büyük sayı {}'dır.".format(b))
else:
    print("En büyük sayı {}'dır.".format(c))