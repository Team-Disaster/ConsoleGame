#include <iostream>
using namespace std;

class Charater
{
private:
	int lv, hp, atk, def, gold;
	float exp;

public:
	Charater()
	{
		lv = 1;
		hp = 100;
		atk = 0;
		def = 0;
		gold = 0;
	}

	void viewCharterInfo()
	{
		cout << "내 정보=========" << endl;
		cout << "LV: " << lv << endl;
		cout << "체력: " << hp << endl;
		cout << "공격: " << atk << endl;
		cout << "방어: " << def << endl;
		cout << "금액: " << gold << endl;
		cout << "================" << endl;
	}

	void viewItem()
	{
		cout << "소유하고 있는 아이템이 없습니다." << endl;
	}
};

class Scene : Charater
{
private:
	string sceneName;
public:
	char userChoice;

	Scene()
	{
		sceneName = "home";
	}

	string getSceneName()
	{
		return sceneName;
	}

	void setSceneName(string Name)
	{
		sceneName = Name;
	}

	void home()
	{
		switch (userChoice)
		{
		case 's':
			viewCharterInfo();
			break;
		case 'i':
			viewItem();
			break;
		case '0':
			setSceneName("town");
			moveScene();
			break;
		default:
			cout << "잘못된 선택입니다." << endl;
			break;
		}
	}

	void town()
	{
		switch (userChoice)
		{
		case 's':
			viewCharterInfo();
			break;
		case 'i':
			viewItem();
			break;
		case '0':
			sceneName = "home";
			moveScene();
			break;
		case '1':
			sceneName = "shop";
			moveScene();
			break;
		case '2':
			sceneName = "huntingGround";
			moveScene();
			break;
		default:
			cout << "잘못된 선택입니다." << endl;
			break;
		}
	}

	void shop()
	{
		switch (userChoice)
		{
		case 'G':
			cout << "구매가능한 물품이 없습니다." << endl;
			cout << "[0:마을로 나가기][G:구매하기][S:판매하기][s:내 정보 보기][i:아이템 창 보기]" << endl;
			cout << ">>";
			break;
		case 'S':
			cout << "판매가능한 물품이 없습니다." << endl;
			cout << "[0:마을로 나가기][G:구매하기][S:판매하기][s:내 정보 보기][i:아이템 창 보기]" << endl;
			cout << ">>";
			break;
		case 's':
			viewCharterInfo();
			cout << "[0:마을로 나가기][G:구매하기][S:판매하기][s:내 정보 보기][i:아이템 창 보기]" << endl;
			cout << ">>";
			break;
		case 'i':
			viewItem();
			cout << "[0:마을로 나가기][G:구매하기][S:판매하기][s:내 정보 보기][i:아이템 창 보기]" << endl;
			cout << ">>";
			break;
		case '0':
			sceneName = "town";
			moveScene();
			break;
		case '1':
			sceneName = "shop";
			moveScene();
			break;
		case '2':
			sceneName = "huntingGround";
			moveScene();
			break;
		default:
			cout << "잘못된 선택입니다." << endl;
			break;
		}
	}

	void huntingGround()
	{
		switch (userChoice)
		{
		case 'A':
			cout << "사냥 가능한 몬스터가 없습니다." << endl;
			cout << "[0:마을로 나가기][A:사냥하기][s:내 정보 보기][i:아이템 창 보기]" << endl;
			cout << ">>";
			break;
		case 's':
			viewCharterInfo();
			cout << "[0:마을로 나가기][A:사냥하기][s:내 정보 보기][i:아이템 창 보기]" << endl;
			cout << ">>";
			break;
		case 'i':
			viewItem();
			cout << "[0:마을로 나가기][A:사냥하기][s:내 정보 보기][i:아이템 창 보기]" << endl;
			cout << ">>";
			break;
		case '0':
			sceneName = "town";
			moveScene();
			break;
		case '1':
			sceneName = "shop";
			moveScene();
			break;
		case '2':
			sceneName = "huntingGround";
			moveScene();
			break;
		default:
			cout << "잘못된 선택입니다." << endl;
			break;
		}
	}

	void moveScene()
	{
		if (sceneName == "home")
		{
			cout << "[0:마을로 나가기][s:내 정보 보기][i:아이템 창 보기]" << endl;
			cout << ">>";
		}
		else if (sceneName == "town")
		{
			cout << "광장으로 나왔다." << endl;
			cout << "[0:집에 가기][1:상점 가기][2:사냥터 가기][s:내 정보 보기][i:아이템 창 보기]" << endl;
			cout << ">>";
		}
		else if (sceneName == "shop")
		{
			cout << "얼마까지 알아보고 오셨어요?" << endl;
			cout << "[0:마을로 나가기][G:구매하기][S:판매하기][s:내 정보 보기][i:아이템 창 보기]" << endl;
			cout << ">>";
		}
		else if (sceneName == "huntingGround")
		{
			cout << "몬스터가 바글바글 하지 않다." << endl;
			cout << "[0:마을로 나가기][A:사냥하기][s:내 정보 보기][i:아이템 창 보기]" << endl;
			cout << ">>";
		}
	}
};

void main()
{
	Scene scene;
	cout << "눈이 번쩍!! 침대에서 일어났다." << endl;
	scene.moveScene();
	do
	{
		cin >> scene.userChoice;
		cout << endl << endl;

		if (scene.getSceneName() == "home")
			scene.home();
		else if (scene.getSceneName() == "town")
			scene.town();
		else if (scene.getSceneName() == "shop")
			scene.shop();
		else if (scene.getSceneName() == "huntingGround")
			scene.huntingGround();
	} while (true);
}