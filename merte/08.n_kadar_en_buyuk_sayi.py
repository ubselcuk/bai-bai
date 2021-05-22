i= int(input('Kaç sayinin en büyüğü alinacak: '))

liste = []
for each in range(1, i+1):
    x = int(input(f'{each}. sayiyi girin: '))
    liste.append(x)
en_buyuk = liste[0]

for sayi in liste:
    if sayi > en_buyuk:
        en_buyuk=sayi
liste.sort(int)

print(f'{liste} \nIcerisinden en büyük sayi: {en_buyuk}')