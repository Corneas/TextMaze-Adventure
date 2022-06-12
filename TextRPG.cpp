#pragma once
#include <iostream>
#include <time.h>
#include <string>
#include "console.h"

using namespace std;

enum monsterType {
	monster1,
	monster2,
	monster3,
	monster4,
	monster5
};

void TextRPG(int totalScore) { // class를 사용하여 monster 종류 구분하기

	int playerHp = totalScore, playerAtk = 20, playerDef = 0;
	int monsterHp = 0, monsterAtk = 0, monsterDef = 0;
	int reflectCount = 3;
	int item[5] = { 1, 1, 0, 0, 0 };
	int iItem;
	string monsterName = "", itemPart = "";
	int playerAct;

	srand((unsigned int)time(NULL));

	int monstertype = rand() % 5;

	switch (monstertype)
	{
	case monster1: // HP : 100, ATK : 5, DEF = 2
		monsterName += "monster1";
		monsterHp = 50;
		monsterAtk = 5;
		monsterDef = 2;
		itemPart += "아이템재료1";
		break;
	case monster2: // HP : 300, ATK : 10, DEF = 5
		monsterName += "monster2";
		monsterHp = 40;
		monsterAtk = 10;
		monsterDef = 5;
		itemPart += "아이템재료2";
		break;
	case monster3: // HP : 500, ATK : 15, DEF = 10
		monsterName += "monster3";
		monsterHp = 80;
		monsterAtk = 15;
		monsterDef = 10;
		itemPart += "아이템재료3";
		break;
	case monster4: // HP : 700, ATK : 23, DEF = 0
		monsterName += "monster4";
		monsterHp = 120;
		monsterAtk = 23;
		monsterDef = 0;
		itemPart += "아이템재료4";
		break;
	case monster5: // HP : 1000, ATK : 15, DEF = 15
		monsterName += "monster5";
		monsterHp = 150;
		monsterAtk = 15;
		monsterDef = 15;
		itemPart += "아이템재료5";
		break;
	}

	//CreateMonster(monsterHP, monsterAtk, monsterDef);

	while (true) {
		system("cls");
		if (playerHp <= 0) {
			cout << "플레이어 사망" << endl;
			break;
		}

		cout << "몬스터와의 전투 시작!" << endl << endl;
		cout << "플레이어 정보" << endl;
		cout << "Hp : " << playerHp << endl;
		cout << "Atk : " << playerAtk << endl;
		cout << "Def : " << playerDef << endl << endl;

		cout << "몬스터 정보" << endl;
		cout << "몬스터 이름 : " << monsterName << endl;
		cout << "Hp : " << monsterHp << endl;
		cout << "Atk : " << monsterAtk << endl;
		cout << "Def : " << monsterDef << endl << endl;

		cout << "무엇을 할 것인지 선택해주세요!" << endl;
		cout << "1 : 공격, 2 : 데미지반사 (남은 횟수 : " << reflectCount << "), 3 : 아이템사용" << endl << endl;

		cin >> playerAct;

		if (playerAct == 1) {
			cout << "플레이어의 공격!" << endl;
			cout << "입힌 데미지 : " << (monsterAtk - playerDef) << endl;
			cout << "몬스터의 공격!" << endl;
			cout << "입은 데미지 : " << (playerAtk - monsterDef) << endl;
			playerHp -= (monsterAtk - playerDef);
			monsterHp -= (playerAtk - monsterDef);
			Sleep(1000);
		}
		else if (playerAct == 2) {
			if (reflectCount <= 0) {
				cout << "더 이상 데미지반사를 사용할 수 없습니다!" << endl;
				break;
			}
			cout << "데미지반사!" << endl;
			if (monsterAtk - monsterDef > 0) {
				cout << "입힌 데미지 : " << (monsterAtk - monsterDef) << endl;
				monsterHp -= (monsterAtk - monsterDef);
			}
			else if (monsterAtk - monsterDef < 0) {
				cout << "입힌 데미지 : 0" << endl;
			}
			reflectCount--;
			Sleep(1000);
		}
		else if (playerAct == 3) {
			cout << "무슨 아이템을 사용하시겠습니까? " << endl;
			cout << "1. 공격력증가 (현재 공격력을 2배로 만들어준다) : " << item[0] << endl;
			cout << "2. 방어력증가 (방어력 +5) : " << item[1] << endl;
			cin >> iItem;
			if (iItem == 1 && item[0] != 0) {
				cout << "공격력 상승!" << endl;
				item[0]--;
				playerAtk *= 2;
				Sleep(1000);
			}
			else if (iItem == 2 && item[1] != 0) {
				cout << "방어력 상승!" << endl;
				item[1]--;
				playerDef += 5;
				Sleep(1000);
			}
			else if (item[0] <= 0 || item[1] <= 0) {
				cout << "아이템이 모자랍니다!" << endl;
				Sleep(1000);
			}
 		}

		if (monsterHp <= 0) {
			cout << "플레이어의 승리!" << endl;
			cout << itemPart << "을(를) 획득하였습니다!" << endl;
			char getch = _getch();
			if (getch)
				break;
			break;
		}
	}

}
