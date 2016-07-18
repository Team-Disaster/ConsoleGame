#include "village.h"

Village::Village() : name("시골"), is_MyHome_Here(false)
{
	thisShop = NULL;
}

Village::Village(string s) : name(s), is_MyHome_Here(false)
{
	thisShop = NULL;
}

Village::Village(bool b) : name("시골"),is_MyHome_Here(b)
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
		cout << get_Name() << "마을 만남의 광장이다. 어떤 만남이 있을까 두근두근!" << endl;
	}
	cout << "[0:집으로][1:상점으로][2:사냥터로][h:헌팅][s:내정보][i:아이템][q:종료]" << endl;
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
		cout << "광장을 둘러봐도 니 취향 없어 포기해" << endl << endl;
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
		cout << "끄냐? 잘가라!" << endl << endl;
		return false;
	}
	default:
	{
		cout << "선택지는 폼으로 있는 게 아니다!" << endl << endl;
		return true;
	}
	}
}