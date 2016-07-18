#include "dungeon.h"

void Dungeon::Show_MenuD(bool b)
{
	if (b)
	{
		cout << "토끼가 뛰노는 쪼렙 사냥터다!" << endl;
	}
	cout << "[0:마을로][A:사냥][s:내정보][i:아이템][q:종료]" << endl;
}

bool Dungeon::Select_ActD(char c, bool* b, Character* chara)
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
	case 'A':
	{
		cout << "뛰노는 토끼를 보니 당신의 의지가 가득 찼으나 잡을 몬스터가 없다..." << endl << endl;
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