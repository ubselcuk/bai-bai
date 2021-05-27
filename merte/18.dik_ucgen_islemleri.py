from math import sqrt

def yankenar(h,y):
    if y>h:
        print('Hipotenüs, yan kenardan küçük olamaz!')
        quit()
    elif y==h:
        print('Hipotenüs ve yan kenardan biri eşit olur ise bu şeye dik üçgen demek için bin şahit gerek!')
        quit()
    else:
        x=(h*h)-(y*y)
        return sqrt(x)

def hipotenus(x,y):
    h=(x*x)+(y*y)
    return sqrt(h)

print(f'''
      Yan Kenar hesaplamak için 1'i tuşlayın
      Hipotenüs hesaplamak için 2'yi tuşlayın
      ''')
a=None
while True:
    try:
        a= int(input('> '))
    except ValueError:
        print("Lutfen 1 veya 2'yi tuşlayin!")
    if a==2 or a==1:
        break
if a==1:
    mod='Yan Kenar'
    print('Mod:', mod)
    h= float(input('Hipotenus: '))
    y= float(input('Diger Kenar: '))
    out= yankenar(h,y)
    
if a==2:
    mod='Hipotenus'
    print('Mod:', mod)
    x= float(input('1. Kenar: '))
    y= float(input('2. Kenar: '))
    out= hipotenus(x,y)
print(f'{mod}: {out}')