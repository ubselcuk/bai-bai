n= int(input('Bir sayi girin: '))
a=0
while n>0:
    a += int(n % 10)
    n /= 10
print(a)