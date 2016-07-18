#include <iostream>

#include "header.h"

using namespace std;

void Menu::menu_print()
{
	static char select;

	switch (current_position)
	{
	case HOME :
		cout << "[0:������ ������][s:�� ���� ����][i:������ â ����]\n\n";
		cout << ">>";
		cin >> select;
		select_home(select);
		break;
	case VILLAGE :
		cout << "[0:���� ����][1:���� ����][2:����� ����][s�� ���� ����][i:������ â ����]\n\n";
		cout << ">>";
		cin >> select;
		select_village(select);
		break;
	case SHOP :
		cout << "[0:������ ������][G:�����ϱ�][S:�Ǹ��ϱ�][s:�� ���� ����][i:������ â ����]\n\n";
		cout << ">>";
		cin >> select;
		select_shop(select);
		break;
	case HUNTING :
		cout << "[0:������ ������][A:����ϱ�][s:�� ���� ����][i:������ â ����]\n\n";
		cout << ">>";
		cin >> select;
		select_hunting(select);
		break;
	}
}

void Menu::select_home(char select)
{
	printf("\n\n\n");

	switch(select)
	{
	case '0' :
		current_position = VILLAGE;
		cout << "�������� ���Դ�\n\n";
		break;
	case 's' :
		stat();
		break;
	case 'i' :
		inventory();
		break;
	default :
		cout << "�ٽ� �Է��ϼ���.\n\n";
		break;
	}
}

void Menu::select_village(char select)
{
	printf("\n\n\n");

	switch(select)
	{
	case '0' :
		current_position = HOME;
		cout << "������ ���Դ�.\n\n";
		break;	case '1' :
		current_position = SHOP;
		cout << "�󸶱��� �˾ƺ��� ���̾��?\n\n";
		break;
	case '2' :
		current_position = HUNTING;
		cout << "���Ͱ� �ٱ۹ٱ� ���� �ʴ�.\n\n";
		break;
	case 's' :
		stat();
		break;
	case 'i' :
		inventory();
		break;
	default :
		cout << "�ٽ� �Է��ϼ���.\n\n\n";
		break;
	}
}

void Menu::select_shop(char select)
{
	printf("\n\n\n");

	switch(select)
	{
	case '0' :
		current_position = VILLAGE;
		cout << "�������� ���Դ�.\n\n\n";
		break;
	case 'G' :
		cout << "���� ������ ��ǰ�� �����ϴ�.\n\n";
		break;
	case 'S' :
		cout << "�Ǹ� ������ ��ǰ�� �����ϴ�.\n\n";
		break;
	case 's' :
		stat();
		break;
	case 'i' :
		inventory();
		break;
	default :
		cout << "�ٽ� �Է��ϼ���.\n\n\n";
		break;
	}
}

void Menu::select_hunting(char select)
{
	printf("\n\n\n");

	switch (select)
	{
	case '0' :
		current_position = VILLAGE;
		cout << "�������� ���Դ�.\n\n";
		break;
	case 'A' :
		cout << "��� ������ ���Ͱ� �����ϴ�.\n\n";
		break;
	case 's' :
		stat();
		break;
	case 'i' :
		inventory();
		break;
	default :
		cout << "�ٽ� �Է��ϼ���.\n\n\n";
		break;
	}
}

void Menu::stat()
{
	cout << "�� ���� ----------\n\n";
		cout << "ü�� : " << 100 << "\n\n";
		cout << "���� : " << 0 << "\n\n";
		cout << "��� : " << 0 << "\n\n";
		cout << "�ݾ� : " << 0 << "\n\n";
		cout << "------------------\n\n\n";
}

void Menu::inventory()
{
	cout << "�����ϰ� �ִ� �������� �����ϴ�.\n\n";
}