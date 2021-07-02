import curses.ascii as ascii
metin = list(input('Metin girin: '))

for i in metin:
    if ascii.islower(i):
        print(f'{i} : {ord(i)}')
    else:
        print(f'{i} : {ord(i)}')