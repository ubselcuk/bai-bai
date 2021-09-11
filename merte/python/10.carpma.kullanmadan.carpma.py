x= int(input('1. Sayi: '))
y= int(input('2. Sayi: '))

flag = '+'
if x<0 and y<0: 
  flag = '-'
  x= -x
if y<0: y, x= x, y

carpim=0
for i in range(y,0,-1):
    carpim+=x

if flag =='-':
    carpim = -carpim
print(carpim)
