#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

#define pi 3.14

int main() {
    float r;
    cout << "Yaricap girin: ", cin >> r;
    
    float cevre = 2 * pi * r;
    float alan = pi * pow(r, 2);
    
    cout << "Alan: ";
    cout << setprecision(3) << alan << endl;
    
    cout << "Cevre: ";
    cout << setprecision(3) << cevre << endl;
}