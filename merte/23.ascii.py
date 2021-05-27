from curses.ascii import islower
metin = input('Metin girin: ')
karakterler = list(metin)

for i in karakterler:
    if islower(i):
        i = i.upper()
        print(f'{i} : {ord(i)}')
    else:
        print(f'{i} : {ord(i)}')