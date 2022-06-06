#include <iostream>
#include <time.h>
#include <string>

using namespace std;

enum monsterType {
	monster1,
	monster2,
	monster3,
	monster4,
	monster5
};

//class Monster {
//public:
//	
//	int monsterHP = 0;
//	int monsterAtk = 0;
//	int monasterDef = 0;
//	char itemPart;
//};
//
//class monster1 : public Monster {
//public:
//	monster1() : Monster(monster1) {
//		monsterHP = 100;
//		monsterAtk = 5;
//		monsterDef = 2;
//
//	}
//};

void TextRPG(int totalScore) { // class를 사용하여 monster 종류 구분하기

	int playerHp = totalScore, playerAtk = 50, playerDef = 0;
	int monsterHp = 0, monsterAtk = 0, monsterDef = 0;
	string monsterName = "", itemPart = "";

	srand((unsigned int)time(NULL));

	int monstertype = rand() % 5;

	switch (monstertype)
	{
	case monster1: // HP : 100, ATK : 5, DEF = 2
		monsterName += "monster1";
		monsterHp = 100;
		monsterAtk = 5;
		monsterDef = 2;
		itemPart += "아이템재료1";
		break;
	case monster2: // HP : 300, ATK : 10, DEF = 5
		monsterName += "monster2";
		monsterHp = 300;
		monsterAtk = 10;
		monsterDef = 5;
		itemPart += "아이템재료2";
		break;
	case monster3: // HP : 500, ATK : 15, DEF = 10
		monsterName += "monster3";
		monsterHp = 500;
		monsterAtk = 15;
		monsterDef = 10;
		itemPart += "아이템재료3";
		break;
	case monster4: // HP : 700, ATK : 23, DEF = 11
		monsterName += "monster4";
		monsterHp = 700;
		monsterAtk = 23;
		monsterDef = 11;
		itemPart += "아이템재료4";
		break;
	case monster5: // HP : 1000, ATK : 30, DEF = 15
		monsterName += "monster5";
		monsterHp = 1000;
		monsterAtk = 30;
		monsterDef = 15;
		itemPart += "아이템재료5";
		break;
	}

	//CreateMonster(monsterHP, monsterAtk, monsterDef);
}
