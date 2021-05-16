n = int(input("Sayıyı girin: "))
top = 0
while n>0:
    top += n % 10
    n= int(n/10)
    print(n)
print("Toplam:",int(top))