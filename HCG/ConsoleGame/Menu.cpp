#include <iostream>

#include "header.h"

using namespace std;

void Menu::menu_print()
{
	static char select;

	switch (current_position)
	{
	case HOME :
		cout << "[0:마을로 나가기][s:내 정보 보기][i:아이템 창 보기]\n\n";
		cout << ">>";
		cin >> select;
		select_home(select);
		break;
	case VILLAGE :
		cout << "[0:집에 가기][1:상점 가기][2:사냥터 가기][s내 정보 보기][i:아이템 창 보기]\n\n";
		cout << ">>";
		cin >> select;
		select_village(select);
		break;
	case SHOP :
		cout << "[0:마을로 나가기][G:구매하기][S:판매하기][s:내 정보 보기][i:아이템 창 보기]\n\n";
		cout << ">>";
		cin >> select;
		select_shop(select);
		break;
	case HUNTING :
		cout << "[0:마을로 나가기][A:사냥하기][s:내 정보 보기][i:아이템 창 보기]\n\n";
		cout << ">>";
		cin >> select;
		select_hunting(select);
		break;
	}
}

void Menu::select_home(char select)
{
	printf("\n\n\n");

	switch(select)
	{
	case '0' :
		current_position = VILLAGE;
		cout << "광장으로 나왔다\n\n";
		break;
	case 's' :
		stat();
		break;
	case 'i' :
		inventory();
		break;
	default :
		cout << "다시 입력하세요.\n\n";
		break;
	}
}

void Menu::select_village(char select)
{
	printf("\n\n\n");

	switch(select)
	{
	case '0' :
		current_position = HOME;
		cout << "집으로 들어왔다.\n\n";
		break;	case '1' :
		current_position = SHOP;
		cout << "얼마까지 알아보고 오셨어요?\n\n";
		break;
	case '2' :
		current_position = HUNTING;
		cout << "몬스터가 바글바글 하지 않다.\n\n";
		break;
	case 's' :
		stat();
		break;
	case 'i' :
		inventory();
		break;
	default :
		cout << "다시 입력하세요.\n\n\n";
		break;
	}
}

void Menu::select_shop(char select)
{
	printf("\n\n\n");

	switch(select)
	{
	case '0' :
		current_position = VILLAGE;
		cout << "광장으로 나왔다.\n\n\n";
		break;
	case 'G' :
		cout << "구매 가능한 물품이 없습니다.\n\n";
		break;
	case 'S' :
		cout << "판매 가능한 물품이 없습니다.\n\n";
		break;
	case 's' :
		stat();
		break;
	case 'i' :
		inventory();
		break;
	default :
		cout << "다시 입력하세요.\n\n\n";
		break;
	}
}

void Menu::select_hunting(char select)
{
	printf("\n\n\n");

	switch (select)
	{
	case '0' :
		current_position = VILLAGE;
		cout << "광장으로 나왔다.\n\n";
		break;
	case 'A' :
		cout << "사냥 가능한 몬스터가 없습니다.\n\n";
		break;
	case 's' :
		stat();
		break;
	case 'i' :
		inventory();
		break;
	default :
		cout << "다시 입력하세요.\n\n\n";
		break;
	}
}

void Menu::stat()
{
	cout << "내 정보 ----------\n\n";
		cout << "체력 : " << 100 << "\n\n";
		cout << "공격 : " << 0 << "\n\n";
		cout << "방어 : " << 0 << "\n\n";
		cout << "금액 : " << 0 << "\n\n";
		cout << "------------------\n\n\n";
}

void Menu::inventory()
{
	cout << "소유하고 있는 아이템이 없습니다.\n\n";
}