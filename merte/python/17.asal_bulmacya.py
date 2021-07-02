n= int(input('Bir sayı girin: '))

asal = True
if n >= 2:
    for i in range(2, n):
        if (n%i) == 0:
            asal=False
            break
if asal and n!=1:
    print(n,'Asal sayidir. 🌟')
else:
    print(n,'Asal sayi degildir! 💔')