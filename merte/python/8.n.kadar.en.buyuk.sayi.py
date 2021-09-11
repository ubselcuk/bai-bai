n = int(input('Toplam kaç sayi gireceksin: '))
sayilar = []
for i in range(n):
    sayilar.append(int(input(f'{i+1}.sayi: ')))

sayilar.sort(reverse=True)
print('Girilen en büyük sayi:', sayilar[0])
