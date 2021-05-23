n = int(input("Faktöriyelini hesaplamak istediğiniz sayıyı girin: "))
a = 1
for i in range(1,n+1):
    a *= i
print("Sonuç:",a)