#include <iostream>
#include "Aplication.hpp"
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

//> < == DateTime
//sort vectors 

int main()
{
	SetConsoleWindowSize(100, 50);
	SetConsoleCursorSize();
	
	Aplication app;

	app.addCashExpense(DateTime(), -2000, "bebra", true);

	
}