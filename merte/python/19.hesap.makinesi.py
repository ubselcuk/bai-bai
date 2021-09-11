print('''
      Toplamak için: 1
      Çıkartmak için: 2
      Çarpmak için: 3
      Bölmek için: 4
      ''')

while True:
    try:
        selection= int(input('> '))
        if selection>=1 and selection<=4: break
        else: raise ValueError('Lutfen 1-4 arasında tuslayin.')
    except Exception as e:
        print('Hata:', e)

x=float(input('1. Sayi: '))
y=float(input('2. Sayi: '))

if selection==1: print(f'{x} + {y} = {x+y}')
if selection==2: print(f'{x} - {y} = {x-y}')
if selection==3: print(f'{x} * {y} = {x*y}')
if selection==4: print(f'{x} / {y} = {x/y}')