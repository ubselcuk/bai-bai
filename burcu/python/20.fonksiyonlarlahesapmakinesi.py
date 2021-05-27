def toplama(a,b):
    islem = a+b
    print("Sonuç:",islem)
    return islem
def cikarma(a,b):
    islem = a-b
    print("Sonuç:", islem)
    return islem
def carpma(a,b):
    islem = a*b
    print("Sonuç:", islem)
    return islem
def bolme(a,b):
    islem = a/b
    print("Sonuç:", islem)
    return islem
try:
    cevap = int(input("""İşlemler:
1 --> Toplama
2 --> Çıkarma
3 --> Çarpma
4 --> Bölme
Yapmak istediğiniz işlemin sayı değerini giriniz: """))
    if cevap < 5 and cevap > 0:
        x = float(input("İlk sayıyı girin: "))
        y = float(input("İkinci sayıyı girin: "))
        if cevap == 1:
            toplama(x,y)
        elif cevap == 2:
            cikarma(x,y)
        elif cevap == 3:
            carpma(x,y)
        elif cevap == 4:
            bolme(x,y)
    else:
        print("Hatalı işlem değeri girişi yaptınız!")
except:
    print("Hatalı sayı girişi yaptınız!")