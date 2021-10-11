#include <iostream>

using namespace std;

int main() {
    float n1;
    float n2;
    float toplam=0;
    cout << "Birinci sayi: ", cin >> n1;
    cout << "Ikinci sayi: ", cin >> n2;
    bool flag = (n1>n2) ? true : false;
    //TODO:
    /* 0-1 arası negatif ve pozitif
    sayılarda çarpım sorunu var */

    if (flag && n1>0){
        for (int i=0; i<n1; i++){
            toplam+=n2;
        }
    } else if (!flag && n2>0){
        for (int i=0; i<n2; i++){
            toplam+=n1;
        }
    } else if (flag && n1<0){
        for (int i=0; i>n1; i--){
            toplam+=n2;
        }
    } else if (!flag && n2<0){
        for (int i=0; i>n2; i--){
            toplam+=n1;
        }
    }
    if (n1 < 0 && n2 < 0) toplam *= -1;
    cout << toplam;
}