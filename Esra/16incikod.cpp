#include <iostream>

int main()
{

    float toplam = 0;
    int sayi = 0;
    int input;

    while (input != -1)
    {
        std::cout << "Sayi giriniz: ";
        std::cin >> input;

        toplam = toplam + input;
        sayi++;
    }

    std::cout << "Aritmetik ortalama: " << ((toplam + 1) / (sayi - 1));

    return 0;
}