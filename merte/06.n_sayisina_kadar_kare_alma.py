n = int(input('Bir sayı girin: '))

toplam=0
for x in range(1, n+1):
    kare=x*x
    toplam+=kare

print(f'Toplam: {toplam}')
