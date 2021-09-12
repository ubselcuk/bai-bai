#include <iostream>

using namespace std;

int main() {
    int ciftler_toplami = 0;
    int tekler_toplami = 0;
    int n;

    cout << "Hangi sayiya kadar olan sayilar toplansin: ", cin >> n;
    if (n >= 0) {
        for (int i = 1; i <= n; i++) {
            if (i % 2 == 0) {
                ciftler_toplami += i;
            } else {
                tekler_toplami += i;
            }
        }
    }
    else {
        for (int i = -1; i >= n; i--) {
            if (i % 2 == 0) {
                ciftler_toplami += i;
            } else {
                tekler_toplami += i;
            }
        }
    }
    cout << "Tek sayilarin toplami = " << tekler_toplami << endl;
    cout << "Cift sayilarin toplami = " << ciftler_toplami;
}