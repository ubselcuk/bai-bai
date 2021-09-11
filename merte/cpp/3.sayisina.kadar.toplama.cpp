#include <iostream>

using namespace std;

int main() {
    int n;
    float toplam = 0;

    cout << "Kac'a kadar olan sayinin toplami alinsin: ", cin >> n;

    if (n>=0){
    for (int i=1; i<=n; i++){
        toplam += i;
        }
    } else {
        for (int i=-1; i>=n; i--){
        toplam += i;
        }
    }
    cout << "Toplam = " << toplam << endl;
}