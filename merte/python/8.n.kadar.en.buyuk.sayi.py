print('Girilen en büyük sayi:', sorted([int(input(f'{i+1}.sayi: ')) for i in range(int(input('Toplam kaç sayi gireceksin: ')))], reverse=True)[0])
