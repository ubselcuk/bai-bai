n = int(input("Sayıyı girin: "))
top = 0
while n>1:
    top += n % 10
    n = n / 10
print("Toplam:",int(top))