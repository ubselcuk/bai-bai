n = int(input("Sayıyı girin: "))
tektoplam = 0
cifttoplam = 0

while n > 0:
    if n % 2 == 0:
        cifttoplam = cifttoplam + n
    else:
        tektoplam = tektoplam + n
    n -= 1

print("Tek Toplam:",tektoplam)
print("Çift Toplam:",cifttoplam)

