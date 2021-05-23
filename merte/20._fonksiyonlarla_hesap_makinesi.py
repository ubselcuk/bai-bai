def topla(x,y):
    return print(f'{x} + {y} = {x+y}')
def cikar(x,y):
    return print(f'{x} - {y} = {x-y}')
def carp(x,y):
    return print(f'{x} * {y} = {x*y}')
def bol(x,y):
    return print(f'{x} / {y} = {x/y}')

print(f'''
      Toplamak için: 1
      Çıkartmak için: 2
      Çarpmak için: 3
      Bölmek için: 4
      ''')
selection=0
while True:
    try:
        selection= int(input('> '))
    except ValueError:
        print("Lutfen doğru tuslayin.")
    if selection>=1 and selection<=4:
        break

x=float(input('1. Sayi: '))
y=float(input('2. Sayi: '))

if selection==1:
    topla(x,y)
if selection==2:
    cikar(x,y)
if selection==3:
    carp(x,y)
if selection==4:
    bol(x,y)