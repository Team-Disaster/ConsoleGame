#include "character.h"

Character::Character() : name("아무개"), posi(h), hp(100), pow(0), def(0), money(0), exp(0)
{}
Character::Character(string n) : name(n), posi(h), hp(100), pow(0), def(0), money(0), exp(0)
{}


void Character::set_Name(string n)
{
	name = n;
}

void Character::set_HP(int h)
{
	hp = h;
}

void Character::set_Pow(int p)
{
	pow = p;
}

void Character::set_Def(int d)
{
	def = d;
}

void Character::set_Money(int m)
{
	money = m;
}

void Character::set_Exp(float e)
{
	exp = e;
}

void Character::set_Posi(char p)
{
	switch (p)
	{
	case 'h':
	{
		posi = h;
		break;
	}
	case 'v':
	{
		posi = v;
		break;
	}
	case 's':
	{
		posi = s;
		break;
	}
	case 'd':
	{
		posi = d;
		break;
	}
	}
}


string Character::get_Name()
{
	return name;
}

int Character::get_HP()
{
	return hp;
}

int Character::get_Pow()
{
	return pow;
}

int Character::get_Def()
{
	return def;
}

int Character::get_Money()
{
	return money;
}

float Character::get_Exp()
{
	return exp;
}

char Character::get_Posi()
{
	char p;
	switch (posi)
	{
	case h:
	{
		p = 'h';
		break;
	}
	case v:
	{
		p = 'v';
		break;
	}
	case s:
	{
		p = 's';
		break;
	}
	case d:
	{
		p = 'd';
		break;
	}
	default:
	{
		p = 'h';
		break;
	}
	}
	return p;
}


void Character::Show_my_Status()
{
	cout << "나의정보------------" << endl;
	cout << "  체력 : " << get_HP() << endl;
	cout << "  공격 : " << get_Pow() << endl;
	cout << "  방어 : " << get_Def() << endl;
	cout << "  금액 : " << get_Money() << endl;
	cout << "--------------------" << endl << endl;
}

void Character::Show_my_Item()
{
	cout << "개-털이구나!" << endl << endl;
}