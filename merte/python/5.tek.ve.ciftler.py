n = int(input("Bir doğal sayı girin: "))

tekler = 0
ciftler = 0
while n > 0:
    if n%2 == 0:
        ciftler += n
    else:
        tekler += n
    n-=1

print('Tekler toplami: {}, Çiftler toplami: {}'.format(tekler, ciftler))