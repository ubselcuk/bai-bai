num = int(input("Sayı giriniz"))
prime = 1
for i in range(2, num):
	if num % i == 0:
	  prime = 0
	  break
if prime == 0:
	print("asal değil")
else:
	print("asal")