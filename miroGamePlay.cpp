#include "miroGamePlay.h"
#include "miro.h"
#include "console.h"

char StrmazeStage1[HEIGHT][WEIGHT];
char StrmazeStage2[HEIGHT][HEIGHT];

using namespace std;

POS tStartpos;
POS tEndpos;
PLAYER tPlayer;

void Miro(int &totalScore, int miro) {

	int score = totalScore;

	switch (miro)
	{
	case 2:
		Miro2(score);
		break;
	default:
		break;
	}

}

void Miro1(int &totalScore) {

	time_t start, end;
	start = time(NULL);

	SetMazeStage1(StrmazeStage1, &tPlayer, &tStartpos, &tEndpos);

	while (true) {
		system("cls");
		gotoxy(0, 0);
		//OutPutMazeStage1(StrmazeStage1, &tPlayer);
		OutPutMaze(StrmazeStage1, &tPlayer);
		cout << endl << "q : ����" << endl;
		cout << "����Ű�� ������ �� ������ �����ϼ���." << endl;
		if (tPlayer.tPos.x == tEndpos.x && tPlayer.tPos.y == tEndpos.y) {
			end = time(NULL);
			cout << endl <<"�̷� Ŭ����!" << endl;
			cout << 600 - (int)(end - start) << "�� ȹ��!" << endl;
			totalScore += 600 - (int)(end - start);
			break;
		}
		char cInput = _getch();
		if (cInput == 'q' || cInput == 'Q') {
			cout << "���� ����";
			return;
		}
		MovePlayer(StrmazeStage1, &tPlayer);
	}

	
}

void Miro2(int& totalScore)
{
	time_t start, end;
	start = time(NULL);

	SetMazeStage2(StrmazeStage2, &tPlayer, &tStartpos, &tEndpos);
	while (true) {
		system("cls");
		gotoxy(0, 0);
		//OutPutMazeStage2(StrmazeStage2, &tPlayer);
		OutPutMaze(StrmazeStage2, &tPlayer);
		cout << endl << "q : ����" << endl;
		cout << "����Ű�� ������ �� ������ �����ϼ���." << endl;
		if (tPlayer.tPos.x == tEndpos.x && tPlayer.tPos.y == tEndpos.y) {
			end = time(NULL);
			cout << "�̷� Ŭ����!" << endl;
			cout << 600 - (int)(end - start) << "�� ȹ��!" << endl;
			totalScore += 600 - (int)(end - start);
			break;
		}
		char cInput = _getch();
		if (cInput == 'q' || cInput == 'Q') break;

		MovePlayer(StrmazeStage2, &tPlayer);
	}
}