vize = int(input("Vize notunuzu giriniz: "))
final = int(input("Final notunuzu giriniz: "))
ort = (vize*4 + final*6)/10
if ort >= 60 and ort <=100:
    print("Dersi geçtiniz!")
elif ort < 60 and ort >=0:
    print("Dersten kaldınız!")
else:
    print("Hatalı giriş yaptınız. Tekrar Deneyin!")