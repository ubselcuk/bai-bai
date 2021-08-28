biggest = 0
for i in range(3):
    x = int(input(f'{i+1}. sayiyi girin: '))
    if x > biggest: biggest = x
print(f'3 sayi icerisinden en büyük olan sayi: {biggest}')