#include <iostream>
#include <string>
#include <Windows.h>
#include "IsKPeriodic.h"


//материнская функция.
//Запрос и ввод строки и коэффициента кратности, 
//запуск функции IsKPeriodic (проверки кратности строки).

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::string str;
    std::cout << "Введите строку для проверки кратности:\n";
    std::getline (std::cin, str);
    int k;
    std::cout << "Введите коэффициент кратности: ";
    //бесконечный цикл ввода коэффициента кратности, использован для проверки правильности ввода,
    //возможностью повтора ввода при ошибке и предусмотренным выходом из цикла при правильном вводе.
    while (true) 
    {
        std::cin >> k;
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "Ошибка ввода, повторите попытку.\n";
            system("pause");
            continue;
        }
        break;
    }
    IsKPeriodic(str, k);
    return 0;
}

