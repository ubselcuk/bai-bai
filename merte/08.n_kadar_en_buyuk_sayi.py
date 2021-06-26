i = int(input('Toplam kaç sayi gireceksin?\n>'))

en_buyuk = 0
for num in range(1, i+1):
    sayi = int(input(f'{num}.sayi > '))
    if sayi > en_buyuk: en_buyuk = sayi
print('Girilen en büyük sayı:', en_buyuk)