n = int(input("Kaç kez sayı gireceğinizi yazın: "))
enbuyuk = 0
while n>0:
    sayilar = int(input("Sayıyı giriniz: "))
    if sayilar > enbuyuk:
        enbuyuk = sayilar
    n-=1
print("En büyük sayı:",enbuyuk)