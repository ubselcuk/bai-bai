n = int(input("Kaç sayı girmek istediğinizi yazın: "))
b = 0
c = n
while n>0:
    a = int(input("Sayıları girin: "))
    b = a + b
    n -= 1
ort = b / c
print("Aritmetik ortalama:",ort)