#include "dungeon.h"

void Dungeon::Show_MenuD(bool b)
{
	if (b)
	{
		cout << "�䳢�� �ٳ�� �ɷ� ����ʹ�!" << endl;
	}
	cout << "[0:������][A:���][s:������][i:������][q:����]" << endl;
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
		cout << "�ٳ�� �䳢�� ���� ����� ������ ���� á���� ���� ���Ͱ� ����..." << endl << endl;
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