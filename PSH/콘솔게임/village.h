#ifndef VILLAGE_HEADER
#define VILLAGE_HEADER

#include "header.h"
#include "character.h"
#include "shop.h"

class Village
{
public:
	Village();
	Village(string s);
	Village(bool b);
	Village(string s, bool b);

	string get_Name();
	bool get_MyHome();
	Shop* get_Shop();

	void set_Name(string s);
	void set_MyHome(bool b);
	void set_Shop(Shop* s);

	void Show_MenuV(bool b);
	bool Select_ActV(char c, bool* b, Character* chara);

private:
	string name;
	bool is_MyHome_Here;
	Shop* thisShop;
};

#endif