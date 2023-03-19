#pragma once
#include <iostream>


//������� �������� ��������� ������ ������������ ���������
void IsKPeriodic(std::string str, int k)
{
	int len = str.length();
	//�������� ��������� ����� ����� ������, ���� ������ �� ������
	//���������� �������� �� �����
	if (len % k)
	{
		std::cout << "������: " << str << ", �� ������ �����: " << k << std::endl;
		return;
	}
	std::string podstroka= str.substr(0, k);
	if (len > k)
	{
		for (int i = k; i < len; i += k)
		{
			if (podstroka != str.substr(i, k))
			{
				std::cout << "������: " << str << ", �� ������ �����: " << k << std::endl;
				return;
			}
		}
	}
	std::cout << "������: " << str << ", ������ �����: " << k << std::endl;
}
