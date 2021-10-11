#include <iostream>

using namespace std;

int main() {
    float n;
    float x;
    float biggest = 0;
    
    cout << "Kac sayi gireceksiniz: ", cin >> x;

    for (int i=1; i<=x; i++){
        cout << i << ". sayiyi girin: ", cin >> n;
        if (i==1){biggest=n;}
        if (n>biggest){
            biggest=n;
        }
    }
    cout << "En buyuk sayi: " << biggest;
}