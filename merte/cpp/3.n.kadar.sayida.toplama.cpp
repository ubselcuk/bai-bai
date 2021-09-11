#include <iostream>

using namespace std;

int main() {
    int n;
    float toplam = 0;
    float sayi;
    
    cout << "Kac tane sayinin toplami alinsin: ", cin >> n;

    for (int i=1; i<=n; i++){
        cout << i << ". sayiyi girin: ", cin >> sayi;
        toplam += sayi;
        cout << "Toplam = " << toplam << endl;
    }
}