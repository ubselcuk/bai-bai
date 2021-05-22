liste = []
for each in range(1, 4):
    x = int(input(f'{each}. sayiyi girin: '))
    liste.append(x)
en_buyuk = liste[0]

for sayi in liste:
    if sayi > en_buyuk:
        en_buyuk=sayi

print(f'3 sayi icerisinden en büyük olan sayi: {en_buyuk}')