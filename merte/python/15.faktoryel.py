n=int(input('Hangi sayının faktöryeli alınsın: '))

x=1
for i in range(1, n+1):
    x*=i
print(f'{n}! = {x}')