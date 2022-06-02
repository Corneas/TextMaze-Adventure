#include "console.h"
#include "miro.h"
#include "miroGamePlay.h"

using namespace std;

enum gameType
{
	MIRO = 1,
	TEXTRPG = 2
};

int main(void) {
	POS tStartpos;
	POS tEndpos;
	PLAYER tPlayer;

	srand((unsigned int)time(NULL));

	int totalScore = 0;

	int gameSelect = 0;

	cout << "게임을 시작하려면 아무 키나 눌러주세요.";
	char getch = _getch();
	if (getch)

	system("cls");
	
	Miro1(totalScore);

	cout << "현재 스코어 : " << totalScore << endl;
	cout << endl << "게임을 선택해주세요!" << endl;
	cout << "1 : 미로게임을 계속 진행한다. (score + 100)" << endl;
	cout << "2 : TextRPG게임으로 넘어간다." << endl;
	cout << "숫자를 입력해주세요! : ";

	while (true) {
		cin >> gameSelect;
		if (gameSelect == MIRO) {
			totalScore += 100;
			Miro2(totalScore);
			break;
		}
		else if (gameSelect == TEXTRPG) {
			break;
		}
		else {
			cout << "1 또는 2중에서 골라주세요!" << endl;
			continue;
		}

	}

	cout << "현재 스코어 : " << totalScore << endl;
	cout << endl << "게임을 선택해주세요!" << endl;
	cout << "1 : 미로게임을 계속 진행한다. (score + 100)" << endl;
	cout << "2 : TextRPG게임으로 넘어간다." << endl;
	cout << "숫자를 입력해주세요! : ";
	cin >> gameSelect;
	
}