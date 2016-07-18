#ifndef __HEADER_H__
#define __HEADER_H__

extern int current_position;		// 현재 위치

typedef enum place {HOME, VILLAGE, SHOP, HUNTING};

class Home
{
public :

};

class Village
{
public :

};

class Shop
{
public :

};

class Hunting
{
public :

};

class Menu
{
private :
	void select_home(char select);
	void select_village(char select);
	void select_shop(char select);
	void select_hunting(char select);
	void stat();
	void inventory();

public :
	void menu_print();
};

#endif