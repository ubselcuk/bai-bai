n = int(input("Sayıyı girin: "))
if n == 2:
    print("Sayı asaldır!")
a = n-1
while a>1:
    if n % a == True and a == 2:
        print("Sayı asaldır!")
    elif n % a == False:
        print("Sayı asal değildir!")
        break
    a -= 1