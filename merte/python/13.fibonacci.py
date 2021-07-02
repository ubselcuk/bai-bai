a, b= 0, 1
for i in (range(1,21)):
    print(f'{i}. fibonacci sayisi: {b}')
    a, b= b, (a+b)