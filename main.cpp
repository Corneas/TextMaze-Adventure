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

void GameSelect(int &totalScore, int &stage, int itemPart[]);

int main(void) {
	POS tStartpos;
	POS tEndpos;
	PLAYER tPlayer;

	srand((unsigned int)time(NULL));

	int totalScore = 0;
	int stage = 1;
	int itemPart[6] = { 0,0,0,0,0 };

	cout << "������ �����Ϸ��� �ƹ� Ű�� �����ּ���.";
	char getch = _getch();
	if (getch)

	system("cls");
	
	cout << "TextMaze Adventure �����մϴ�!" << endl << endl;
	cout << "====================���ӷ�====================" << endl;
	cout << "�̷ΰ��Ӱ� TextRPG�� �����Ǿ��ֽ��ϴ�." << endl;
	cout << "ó������ �̷ΰ����� ������, �̷ΰ����� Ŭ�����ϸ� Ŭ���� �ð��� ���� ������ �ο��˴ϴ�!" << endl;
	cout << "�̷ΰ����� Ŭ�����ϸ�, ���� �̷ΰ������� �Ѿ�� TextRPG�� �Ѿ�� ������ �� �ֽ��ϴ�!" << endl;
	cout << "�̷ΰ������� �Ѿ��, 100���� ����ϴ�." << endl;
	cout << "TextRPG�� �Ѿ��, ���͸� ��� ��������Ḧ ���� �� �ֽ��ϴ�." << endl;
	cout << "��������Ḧ ��� �������� ������ ������ ��������!" << endl;

	getch = _getch();
	if (getch)
		system("cls");


	Miro1(totalScore);

	while (stage < 5) {
		GameSelect(totalScore, stage, itemPart);
	}

	cout << "���� ������ ������ ����" << endl;
	for (auto a : itemPart) {
		cout << a << endl;
	}
}

void GameSelect(int &totalScore, int &stage, int itemPart[]) {
	int gameSelect = 0;

	cout << "���� ���ھ� : " << totalScore << endl;
	cout << endl << "������ �������ּ���!" << endl;
	cout << "1 : �̷ΰ����� ��� �����Ѵ�. (score + 100)" << endl;
	cout << "2 : TextRPG�������� �Ѿ��." << endl;
	cout << "���ڸ� �Է����ּ���! : ";


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
			cout << "1 �Ǵ� 2�߿��� ����ּ���!" << endl;
			continue;
		}

	}
}