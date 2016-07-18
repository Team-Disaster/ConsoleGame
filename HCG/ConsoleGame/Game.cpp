#include <iostream>

#include "header.h"

using namespace std;

int main()
{
	current_position = HOME;

	Home home;
	Village village;
	Hunting hunt;
	Menu menu;

	cout << "´«ÀÌ ¹øÂ½!! Ä§´ë¿¡¼­ ÀÏ¾î³µ´Ù.\n\n";

	while(1)
	{
		menu.menu_print();
	}

	return 0;
}