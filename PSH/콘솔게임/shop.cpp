#include "shop.h"

Shop::Shop() : name("�ð�")
{}

Shop::Shop(string s) : name(s)
{}


string Shop::get_Name()
{
	return name;
}

void Shop::set_Name(string s)
{
	name = s;
}


void Shop::Show_MenuS(bool b)
{
	if (b)
	{
		cout << "�������, ȣ����! " << get_Name() << "�����Դϴ�!" << endl;
	}
	cout << "[0:������][G:����][S:�Ǹ�][s:������][i:������][q:����]" << endl;
}

bool Shop::Select_ActS(char c, bool* b, Character* chara)
{
	switch (c)
	{
	case '0':
	{
		cout << endl;
		chara->set_Posi('v');
		*b = true;
		return true;
	}
	case 'G':
	{
		cout << "������ ���� ����!" << endl << endl;
		return true;
	}
	case 'S':
	{
		cout << "������ ������ �� �Ⱦ�? ����!" << endl << endl;
		return true;
	}
	case 's':
	{
		chara->Show_my_Status();
		return true;
	}
	case 'i':
	{
		chara->Show_my_Item();
		return true;
	}
	case 'q':
	{
		cout << "����? �߰���!" << endl << endl;
		return false;
	}
	default:
	{
		cout << "�������� ������ �ִ� �� �ƴϴ�!" << endl << endl;
		return true;
	}
	}
}