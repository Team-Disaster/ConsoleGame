#ifndef SHOP_HEADER
#define SHOP_HEADER


#include "header.h"
#include "character.h"

class Shop
{
public:
	Shop();
	Shop(string s);

	string get_Name();

	void set_Name(string s);

	void Show_MenuS(bool b);
	bool Select_ActS(char c, bool* b, Character* chara);

private:
	string name;
};

#endif