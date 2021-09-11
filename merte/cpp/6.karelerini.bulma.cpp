#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float toplam=0;
    int n;

    cout << "Hangi sayiya kadar olan\nsayilarin kareleri toplansin: ", cin >> n;

    if (n>=0){
    for (int i=1; i<=n; i++){
        toplam += pow(i, 2);
        }
    } else {
    for (int i=-1; i>=n; i--){
        toplam += pow(i, 2);
        }
    }
    cout << n<< "'e kadar olan sayilarin kare toplamı: " << toplam;
}