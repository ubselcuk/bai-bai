try:
    vize= float(input('Vizeden kaç aldin: '))
    if not 100 >= vize >= 0: 
        raise Exception('Lutfen vize notu icin 0-100 arasinda bir deger girin.')

    final= float(input('Finalden kaç aldin: '))
    if not 100 >= final >= 0: 
        raise Exception('Lutfen final notu icin 0-100 arasinda bir deger girin.')
    
    sonuc= ((vize/100)*40)+((final/100)*60)
except Exception as e:
    print('Hata:', e)
    sys:exit(0)

if sonuc >= 70: 
    print('Tebrikler! basariyla gectin,', end=' ')
else: 
    print('Maalesef Kaldin,', end=' ')
print('Yıl Sonu Notun: %s' % sonuc)