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

	cout << "������ �����Ϸ��� �ƹ� Ű�� �����ּ���.";
	char getch = _getch();
	if (getch)

	system("cls");
	
	Miro1(totalScore);

	cout << "���� ���ھ� : " << totalScore << endl;
	cout << endl << "������ �������ּ���!" << endl;
	cout << "1 : �̷ΰ����� ��� �����Ѵ�. (score + 100)" << endl;
	cout << "2 : TextRPG�������� �Ѿ��." << endl;
	cout << "���ڸ� �Է����ּ���! : ";

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
			cout << "1 �Ǵ� 2�߿��� ����ּ���!" << endl;
			continue;
		}

	}

	cout << "���� ���ھ� : " << totalScore << endl;
	cout << endl << "������ �������ּ���!" << endl;
	cout << "1 : �̷ΰ����� ��� �����Ѵ�. (score + 100)" << endl;
	cout << "2 : TextRPG�������� �Ѿ��." << endl;
	cout << "���ڸ� �Է����ּ���! : ";
	cin >> gameSelect;
	
}