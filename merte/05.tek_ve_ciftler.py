tekler_toplami = 0
ciftler_toplami = 0

n = int(input("Bir sayı girin: "))
while n > 0:
    if n%2 == 0:
        ciftler_toplami = ciftler_toplami + n
    
    else:
        tekler_toplami = tekler_toplami + n
    
    n=n-1

print(f'Tekler toplami: {tekler_toplami}, Çiftler toplami: {ciftler_toplami}')

