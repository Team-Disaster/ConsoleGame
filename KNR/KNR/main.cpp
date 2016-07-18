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
		cout << "�� ����=========" << endl;
		cout << "LV: " << lv << endl;
		cout << "ü��: " << hp << endl;
		cout << "����: " << atk << endl;
		cout << "���: " << def << endl;
		cout << "�ݾ�: " << gold << endl;
		cout << "================" << endl;
	}

	void viewItem()
	{
		cout << "�����ϰ� �ִ� �������� �����ϴ�." << endl;
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
			cout << "�߸��� �����Դϴ�." << endl;
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
			cout << "�߸��� �����Դϴ�." << endl;
			break;
		}
	}

	void shop()
	{
		switch (userChoice)
		{
		case 'G':
			cout << "���Ű����� ��ǰ�� �����ϴ�." << endl;
			cout << "[0:������ ������][G:�����ϱ�][S:�Ǹ��ϱ�][s:�� ���� ����][i:������ â ����]" << endl;
			cout << ">>";
			break;
		case 'S':
			cout << "�ǸŰ����� ��ǰ�� �����ϴ�." << endl;
			cout << "[0:������ ������][G:�����ϱ�][S:�Ǹ��ϱ�][s:�� ���� ����][i:������ â ����]" << endl;
			cout << ">>";
			break;
		case 's':
			viewCharterInfo();
			cout << "[0:������ ������][G:�����ϱ�][S:�Ǹ��ϱ�][s:�� ���� ����][i:������ â ����]" << endl;
			cout << ">>";
			break;
		case 'i':
			viewItem();
			cout << "[0:������ ������][G:�����ϱ�][S:�Ǹ��ϱ�][s:�� ���� ����][i:������ â ����]" << endl;
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
			cout << "�߸��� �����Դϴ�." << endl;
			break;
		}
	}

	void huntingGround()
	{
		switch (userChoice)
		{
		case 'A':
			cout << "��� ������ ���Ͱ� �����ϴ�." << endl;
			cout << "[0:������ ������][A:����ϱ�][s:�� ���� ����][i:������ â ����]" << endl;
			cout << ">>";
			break;
		case 's':
			viewCharterInfo();
			cout << "[0:������ ������][A:����ϱ�][s:�� ���� ����][i:������ â ����]" << endl;
			cout << ">>";
			break;
		case 'i':
			viewItem();
			cout << "[0:������ ������][A:����ϱ�][s:�� ���� ����][i:������ â ����]" << endl;
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
			cout << "�߸��� �����Դϴ�." << endl;
			break;
		}
	}

	void moveScene()
	{
		if (sceneName == "home")
		{
			cout << "[0:������ ������][s:�� ���� ����][i:������ â ����]" << endl;
			cout << ">>";
		}
		else if (sceneName == "town")
		{
			cout << "�������� ���Դ�." << endl;
			cout << "[0:���� ����][1:���� ����][2:����� ����][s:�� ���� ����][i:������ â ����]" << endl;
			cout << ">>";
		}
		else if (sceneName == "shop")
		{
			cout << "�󸶱��� �˾ƺ��� ���̾��?" << endl;
			cout << "[0:������ ������][G:�����ϱ�][S:�Ǹ��ϱ�][s:�� ���� ����][i:������ â ����]" << endl;
			cout << ">>";
		}
		else if (sceneName == "huntingGround")
		{
			cout << "���Ͱ� �ٱ۹ٱ� ���� �ʴ�." << endl;
			cout << "[0:������ ������][A:����ϱ�][s:�� ���� ����][i:������ â ����]" << endl;
			cout << ">>";
		}
	}
};

void main()
{
	Scene scene;
	cout << "���� ��½!! ħ�뿡�� �Ͼ��." << endl;
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