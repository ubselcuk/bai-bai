i = 0
a = 0
while True:
    n = int(input("Sayıyı girin: "))
    if n == -1:
        break
    else:
        a += n
        i += 1
b = a/i
print("Sonuç:",b)