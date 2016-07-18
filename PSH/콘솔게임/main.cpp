#include "header.h"
#include "character.h"
#include "village.h"
#include "shop.h"
#include "dungeon.h"
#include <stdlib.h>

void Show_Menu(bool b);
bool Select_Act(char c, bool* b, Character* chara);

int main()
{
	Character* c;
	c = new Character;
	
	Village v(true);
	Shop s;
	Dungeon d;
	
	char input;
	bool gaming = true;

	bool* mungu;
	mungu = new bool;
	*mungu = true;
	
	v.set_Shop(&s);

	while (gaming)
	{
		switch (c->get_Posi())
		{
		case 'h':
		{
			Show_Menu(*mungu);
			cin >> input;
			*mungu = false;
			gaming = Select_Act(input, mungu, c);
			break;
		}
		case 'v':
		{
			v.Show_MenuV(*mungu);
			cin >> input;
			*mungu = false;
			gaming = v.Select_ActV(input, mungu, c);
			break;
		}
		case 's':
		{
			s.Show_MenuS(*mungu);
			cin >> input;
			*mungu = false;
			gaming = s.Select_ActS(input, mungu, c);
			break;
		}
		case 'd':
		{
			d.Show_MenuD(*mungu);
			cin >> input;
			*mungu = false;
			gaming = d.Select_ActD(input, mungu, c);
			break;
		}
		default:
			break;
		}
	}

	system("pause");
	return 0;
}

void Show_Menu(bool b)
{
	if (b)
	{
		cout << "�Ͼ��, ��ħ�� ����. ģ�� ������ ����!" << endl;
	}
	cout << "[0:������][s:������][i:������][q:����]" << endl;
}

bool Select_Act(char c, bool* b, Character* chara)
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