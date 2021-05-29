#include <iostream>

int main()
{
    int a, b, islem;
    std::cout << "islem yapmak istediginiz sayilari girin:" << std::endl;
    std::cin >> a >> b;
    std::cout << "yapmak istediginiz islemi girin:" << std::endl;
    std::cin >> islem;
    if (islem == 1)
    {
        int topla(int a, int b);
        
            int result;
            result = a + b;
            std::cout << "Toplamlari:" << result << std::endl;
            return (result);
        
    }
    else if (islem == 2)
    {
        int carp(int a, int b);
        
            int result;
            result = a * b;
            std::cout << "Carpimlari:" << result << std::endl;
            return (result);
        
    }
    else if (islem == 3)
    {
        int bol(int a, int b);
        
            int result;
            result = a / b;
            std::cout << "Bolumleri:" << result << std::endl;
            return (result);
        
    }
    else if (islem == 4)
    {
        int fark(int a, int b);
        
            int result;
            result = a - b;
            std::cout << "Farklari:" << result << std::endl;

            return (result);
        
    }
    else
    {
        std::cout << "yanlıs secim." << std::endl;
    }

    return 0;
}
