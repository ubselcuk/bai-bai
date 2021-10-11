#include <iostream>

using namespace std;

int main() {
    float toplam = 0;
    float n;
    int x;
    cout << "Toplam kac sayi gireceksiniz: ", cin >> x;

    for (int i=1; i<=x; i++){
        cout << i << ". sayiyi girin: ", cin >> n;
        toplam+=n;
    }
    cout << "Aritmetik ortalama: " << (toplam/x);
}