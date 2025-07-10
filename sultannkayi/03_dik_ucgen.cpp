#include <iostream>
#include <cmath>
using namespace std;

double hipotenus(double a, double b) {
    return sqrt(a + a + b + b);    //burasını hatalı yazdım !!!!
}

int main() {
    double kenar1, kenar2;
    cout << "Birinci dik kenari girin: ";
    cin >> kenar1;
    cout << "Ikinci dik kenari girin: ";
    cin >> kenar2;
    double h = hipotenus(kenar1, kenar2);
    cout << "Hipotenus: " << h << endl;
    return 0;
}
