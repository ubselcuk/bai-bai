a,b,t=0,1,None
for i in (range(1,21)):
    print(f'{i}. fibonacci sayisi: {b}')
    t=b
    b=a+b
    a=t