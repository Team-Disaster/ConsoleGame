#include "shop.h"

Shop::Shop() : name("시골")
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
		cout << "어서오세요, 호갱님! " << get_Name() << "가게입니다!" << endl;
	}
	cout << "[0:마을로][G:구매][S:판매][s:내정보][i:아이템][q:종료]" << endl;
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
		cout << "거지놈 당장 나가!" << endl << endl;
		return true;
	}
	case 'S':
	{
		cout << "딱봐도 개털이 뭘 팔아? 나가!" << endl << endl;
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