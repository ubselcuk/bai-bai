#include <iostream>

using namespace std;

int main() {
    float n;
    float biggest = 0;
    
    for (int i=1; i<=3; i++){
        cout << i << ". sayiyi girin: ", cin >> n;
        if (i==1){biggest=n;}/* eğer negatif değer girilir ise
                                doğru sonuç için ilk değeri
                                biggest olarak atadım. */
        if (n>biggest){
            biggest=n;
        }
    }
    cout << "En buyuk sayi: " << biggest;
}