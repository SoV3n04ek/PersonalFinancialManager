#include <iostream>
#include "CashExpense.hpp"
#include "winconio.h"
using namespace std;

/*
������� �������� :
� ���������� ������ ��������� :
� ��������� / ������������� / ������� �������
� ������� �����, �����, ��������(����. "��������")
� ��������� / ������������� / ������� ������
� ������� �����, �����, ��������(����. "��������")
� ��������� ����� ������ / ������ / ������� ���������� �������(����� ������� ����� ����� �������� �� ������)
�������� :
	21.11.21 � 31.11.21 * ����� 1000 ������ 520 ������� : 480
	
	� ��������� / ������������� / ������� ����������� �������
	� ������ ���������� � ������� ������� ����� ���������� � ���, ��� �� �� �����������
	� ���������������� ������� �� ��������� � ������.
	
	� ��������� / ������������� / ������� ����������� ������
	� ������ ���������� � ������ ������� 
		����� ���������� � ���, ��� �� �� ������� 
	� ������������ ������ �� ��������� � ������.
	
	���������������� ���������� :
� ����������� ���������� ����������
� ��������� ���������� ��������� ������������� � ����(�)
� ��� ������� ��������� ���������� �� �����, 
	��� ������ ��������� ���������� ����
� � ����������� ���������� ���������� ���
� ������ ���������� ������ ������� ����� ����� ����������� ���������� ����
	(�������������, ���������� �� ������ / �������,
		������������ ������� ���������).
*/
int main()
{
	SetConsoleWindowSize(100, 50);
	SetConsoleCursorSize();

	int value = 12500;
	string description = "";
	bool done = false;
	const DateTime& date = DateTime();


	CashExpense* a = new CashExpense(date, value, description, done);

	cout << a->getValue();
	delete a;
}