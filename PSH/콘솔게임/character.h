#ifndef CHARACTER_HEADER
#define CHARACTER_HEADER

#include "header.h"

class Character
{
public:
	Character();
	Character(string n);
	
	void set_Name(string n);
	void set_HP(int h);
	void set_Pow(int p);
	void set_Def(int d);
	void set_Money(int m);
	void set_Exp(float e);
	void set_Posi(char p);

	string get_Name();
	int get_HP();
	int get_Pow();
	int get_Def();
	int get_Money();
	float get_Exp();
	char get_Posi();

	void Show_my_Status();
	void Show_my_Item();


private:
	string name;
	int hp;
	int pow;
	int def;
	int money;
	float exp;
	enum {h, v, s, d} posi;
};

#endif