i= int(input('Kaç sayinin aritmetik ortalamasi alinacak: '))
toplam=0
for each in range(1, i+1):
    x = float(input(f'{each}. sayiyi girin: '))
    toplam+=x

print(f'Aritmetik ortalama: {toplam/i}')
