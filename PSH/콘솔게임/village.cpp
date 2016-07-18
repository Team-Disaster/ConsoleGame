#include "village.h"

Village::Village() : name("�ð�"), is_MyHome_Here(false)
{
	thisShop = NULL;
}

Village::Village(string s) : name(s), is_MyHome_Here(false)
{
	thisShop = NULL;
}

Village::Village(bool b) : name("�ð�"),is_MyHome_Here(b)
{
	thisShop = NULL;
}

Village::Village(string s, bool b) : name(s), is_MyHome_Here(b)
{
	thisShop = NULL;
}


string Village::get_Name()
{
	return name;
}

bool Village::get_MyHome()
{
	return is_MyHome_Here;
}

Shop* Village::get_Shop()
{
	return thisShop;
}

void Village::set_Name(string s)
{
	name = s;
}

void Village::set_MyHome(bool b)
{
	is_MyHome_Here = b;
}

void Village::set_Shop(Shop* s)
{
	thisShop = s;
}


void Village::Show_MenuV(bool b)
{
	if (b)
	{
		cout << get_Name() << "���� ������ �����̴�. � ������ ������ �αٵα�!" << endl;
	}
	cout << "[0:������][1:��������][2:����ͷ�][h:����][s:������][i:������][q:����]" << endl;
}

bool Village::Select_ActV(char c, bool* b, Character* chara)
{
	switch (c)
	{
	case '0':
	{
		cout << endl;
		chara->set_Posi('h');
		*b = true;
		return true;
	}
	case '1':
	{
		cout << endl;
		chara->set_Posi('s');
		*b = true;
		return true;
	}
	case '2':
	{
		cout << endl;
		chara->set_Posi('d');
		*b = true;
		return true;
	}
	case 'h':
	{
		cout << "������ �ѷ����� �� ���� ���� ������" << endl << endl;
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