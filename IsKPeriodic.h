#pragma once
#include <iostream>


//функция проверки кратности строки коэффициенту кратности
void IsKPeriodic(std::string str, int k)
{
	int len = str.length();
	//проверка кратности общей длины строки, если строка не кратна
	//дальнейшая проверка не нужна
	if (len % k)
	{
		std::cout << "Строка: " << str << ", не кратна числу: " << k << std::endl;
		return;
	}
	std::string podstroka= str.substr(0, k);
	if (len > k)
	{
		for (int i = k; i < len; i += k)
		{
			if (podstroka != str.substr(i, k))
			{
				std::cout << "Строка: " << str << ", не кратна числу: " << k << std::endl;
				return;
			}
		}
	}
	std::cout << "Строка: " << str << ", кратна числу: " << k << std::endl;
}
