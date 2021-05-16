n = int(input("Sayıyı girin: "))
top = 0
while n>0:
    top += int(n % 10)
    n = n / 10
print("Toplam:",int(top))