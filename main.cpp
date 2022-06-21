﻿#include "console.h"
#include "miro.h"
#include "miroGamePlay.h"
#include "TextRPGPlay.h"
#include "ItemCrafting.h"

using namespace std;

enum gameType
{
	MIRO = 1,
	TEXTRPG = 2
};

void GameSelect(int &totalScore, int &stage, int itemPart[]);

int main(void) {
	Cursorhide();
	POS tStartpos;
	POS tEndpos;
	PLAYER tPlayer;

	srand((unsigned int)time(NULL));

	int totalScore = 0;
	int stage = 1;
	int itemPart[5] = { 0,0,0,0,0 };

	int setmode;

	setmode = _setmode(_fileno(stdout), _O_U8TEXT);
	wcout << L"		    ███╗   ███╗ █████╗ ███████╗███████╗██████╗ ██████╗  ██████╗ " << endl;
	wcout << L"		    ████╗ ████║██╔══██╗╚══███╔╝██╔════╝██╔══██╗██╔══██╗██╔════╝ " << endl;
	wcout << L"		    ██╔████╔██║███████║  ███╔╝ █████╗  ██████╔╝██████╔╝██║  ███╗" << endl;
	wcout << L"		    ██║╚██╔╝██║██╔══██║ ███╔╝  ██╔══╝  ██╔══██╗██╔═══╝ ██║   ██║" << endl;
	wcout << L"		    ██║ ╚═╝ ██║██║  ██║███████╗███████╗██║  ██║██║     ╚██████╔╝" << endl;
	wcout << L"		    ╚═╝     ╚═╝╚═╝  ╚═╝╚══════╝╚══════╝╚═╝  ╚═╝╚═╝      ╚═════╝ " << endl;
	wcout << L"	 █████╗ ██████╗ ██╗   ██╗███████╗███╗   ██╗████████╗██╗   ██╗██████╗ ███████╗██╗██╗" << endl;
	wcout << L"	██╔══██╗██╔══██╗██║   ██║██╔════╝████╗  ██║╚══██╔══╝██║   ██║██╔══██╗██╔════╝██║██║" << endl;
	wcout << L"	███████║██║  ██║██║   ██║█████╗  ██╔██╗ ██║   ██║   ██║   ██║██████╔╝█████╗  ██║██║" << endl;
	wcout << L"	██╔══██║██║  ██║╚██╗ ██╔╝██╔══╝  ██║╚██╗██║   ██║   ██║   ██║██╔══██╗██╔══╝  ╚═╝╚═╝" << endl;
	wcout << L"	██║  ██║██████╔╝ ╚████╔╝ ███████╗██║ ╚████║   ██║   ╚██████╔╝██║  ██║███████╗██╗██╗" << endl;
	wcout << L"	╚═╝  ╚═╝╚═════╝   ╚═══╝  ╚══════╝╚═╝  ╚═══╝   ╚═╝    ╚═════╝ ╚═╝  ╚═╝╚══════╝╚═╝╚═╝" << endl;

	setmode = _setmode(_fileno(stdout), _O_TEXT);
	cout << "게임을 시작하려면 아무 키나 눌러주세요.";
	char getch = _getch();
	if (getch)

	system("cls");
	
	cout << "TextMaze Adventure 시작합니다!" << endl << endl;
	cout << "====================게임룰====================" << endl;
	cout << "미로게임과 TextRPG로 구성되어있습니다." << endl;
	cout << "처음에는 미로게임이 나오며, 미로게임을 클리어하면 클리어 시간에 따라 점수가 부여됩니다!" << endl;
	cout << "미로게임을 클리어하면, 다음 미로게임으로 넘어갈지 TextRPG로 넘어갈지 선택할 수 있습니다!" << endl;
	cout << "미로게임으로 넘어가면, 100점을 얻습니다." << endl;
	cout << "TextRPG로 넘어가면, 몬스터를 잡고 아이템재료를 얻을 수 있습니다." << endl;
	cout << "아이템재료를 모아 아이템을 제조해 점수를 얻으세요!" << endl;

	getch = _getch();
	if (getch)
		system("cls");

	Miro1(totalScore);

	while (stage < 6) {
		GameSelect(totalScore, stage, itemPart);
	}

	cout << "현재 보유한 아이템 개수" << endl;
	for (auto a : itemPart) {
		cout << a << endl;
	}

	ItemCrafting(itemPart, totalScore);
}

void GameSelect(int &totalScore, int &stage, int itemPart[]) {
	int gameSelect = 0;

	cout << "현재 스코어 : " << totalScore << endl;
	cout << endl << "게임을 선택해주세요!" << endl;
	cout << "1 : 미로게임을 계속 진행한다. (score + 100)" << endl;
	cout << "2 : TextRPG게임으로 넘어간다." << endl;
	cout << "숫자를 입력해주세요! : ";

	while (true) {
		cin >> gameSelect;
		if (gameSelect == MIRO) {
			totalScore += 100;
			Miro(totalScore, stage);
			break;
		}
		else if (gameSelect == TEXTRPG) {
			TextRPG(totalScore, stage, itemPart);
			break;
		}
		else {
			cout << "1 또는 2중에서 골라주세요!" << endl;
			continue;
		}
	}
}