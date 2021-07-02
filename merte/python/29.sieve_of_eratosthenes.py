def sieve_of_eratosthenes(x):
    minimum_asal= 2
    num= x+1
    asal= []
    for i in range(minimum_asal, num): asal.append(i)
    for i in asal:
        elements= range(i, num, i)
        for e in elements[1:]:
            if e in asal: asal.remove(e)
    return asal

def main():
    try:
        user_input= int(input('Kaça kadar asal sayılar yazdırılsın: '))
        print(', '.join(map(str,sieve_of_eratosthenes(user_input))))
    except Exception as e: print('Hata!', e)

if __name__=='__main__':
    main()