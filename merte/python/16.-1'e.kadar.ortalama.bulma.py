liste=[]
while True:
    n=float(input('Ortalama için sayı girin: '))
    if n==-1:
        toplam=0
        if len(liste)==0:
            break
        else:
            for each in liste:
                toplam+=each
        print(f'Ortalama: {toplam/len(liste)}')
        break
    else:
        liste.append(n)