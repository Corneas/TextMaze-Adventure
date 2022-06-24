#include "console.h"
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

void GamePrint();
void GameSelect(int &totalScore, int &stage, int itemPart[], int &score);

int main(void) {
	Cursorhide();
	POS tStartpos;
	POS tEndpos;
	PLAYER tPlayer;

	srand((unsigned int)time(NULL));

	int totalScore = 0;
	int score = 0;
	int stage = 1;
	int itemPart[5] = { 0,0,0,0,0 };

	GamePrint();


	EndingScene2();

	//EndingScene4();

	Miro1(totalScore, score);

	while (stage < 5) {
		GameSelect(totalScore, stage, itemPart, score);
	}

	while (true) {
		int playerAct = 0;
		cout << "RPG게임으로 넘어가기 : 1" << endl;
		cout << "아이템 제작하기 : 2" << endl;
		cin >> playerAct;
		if (playerAct == 1) {
			TextRPG(totalScore, stage, itemPart, score);
			break;
		}
		else if (playerAct == 2) {
			break;
		}
		else {
			cout << "1 또는 2중에 입력해주세요!" << endl;
		}
	}
	

	cout << endl << "현재 보유한 아이템 개수" << endl;

	ItemCrafting(itemPart, totalScore);
}

void GamePrint() {
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
	cout << "미로게임과 RPG로 구성되어있습니다." << endl;
	cout << "처음에는 미로게임이 나오며, 미로게임을 클리어하면 클리어 시간에 따라 점수가 부여됩니다!" << endl;
	cout << "미로게임을 클리어하면, 다음 미로게임으로 넘어갈지 TextRPG로 넘어갈지 선택할 수 있습니다!" << endl;
	cout << "미로게임으로 넘어가면, 100점을 얻습니다." << endl;
	cout << "TextRPG로 넘어가면, 몬스터를 잡고 아이템재료를 얻을 수 있습니다." << endl;
	cout << "아이템재료를 모아 아이템을 제조해 점수를 얻으세요!" << endl;

	getch = _getch();
	if (getch)
		system("cls");
}

void GameSelect(int &totalScore, int &stage, int itemPart[], int& score) {
	int gameSelect = 0;

	cout << "현재 스코어 : " << totalScore << endl;
	cout << endl << "게임을 선택해주세요!" << endl;
	cout << "1 : 미로게임을 계속 진행한다. (score + 100)" << endl;
	cout << "2 : RPG게임으로 넘어간다." << endl;
	cout << "숫자를 입력해주세요! : ";

	while (true) {
		cin >> gameSelect;
		if (gameSelect == MIRO) {
			totalScore += 100;
			Miro(totalScore, stage, score);
			break;
		}
		else if (gameSelect == TEXTRPG) {
			TextRPG(totalScore, stage, itemPart, score);
			break;
		}
		else {
			cout << "1 또는 2중에서 골라주세요!" << endl;
			continue;
		}
	}
}