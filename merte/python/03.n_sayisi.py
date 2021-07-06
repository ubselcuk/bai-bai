n = int(input("Bir doğal sayı girin: "))

toplam=0
if n>0:
	for i in range(1, n+1):
		toplam+=i
	print(f"{n}'e kadar olan sayilarin toplami = {toplam}")
else:
	print('Lutfen bir doğal sayi girin')