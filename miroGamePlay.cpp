#include "miroGamePlay.h"
#include "miro.h"
#include "console.h"

char StrmazeStage1[HEIGHT][WEIGHT];
char StrmazeStage2[HEIGHT][HEIGHT];
char StrmazeStage3[HEIGHT][WEIGHT];
char StrmazeStage4[HEIGHT][WEIGHT];
char StrmazeStage5[HEIGHT][WEIGHT];

using namespace std;

POS tStartpos;
POS tEndpos;
PLAYER tPlayer;

void Miro(int &totalScore, int &stage) {

	++stage;

	switch (stage)
	{
	case 2:
		Miro2(totalScore);
		break;
	case 3:
		Miro3(totalScore);
		break;
	case 4:
		Miro4(totalScore);
		break;
	case 5:
		Miro5(totalScore);
		break;
	default:
		break;
	}

}

void Miro1(int &totalScore) {

	time_t start, end;
	start = time(NULL);
	Cursorhide();

	SetMazeStage1(StrmazeStage1, &tPlayer, &tStartpos, &tEndpos);

	while (true) {
		system("cls");
		gotoxy(0, 0);
		//OutPutMazeStage1(StrmazeStage1, &tPlayer);
		OutPutMaze(StrmazeStage1, &tPlayer);
		cout << endl << "q : 종료" << endl;
		cout << "방향키로 움직여 ◎ 지점에 도착하세요." << endl;
		if (tPlayer.tPos.x == tEndpos.x && tPlayer.tPos.y == tEndpos.y) {
			end = time(NULL);
			cout << endl <<"미로 클리어!" << endl;
			cout << 600 - (int)(end - start) << "점 획득!" << endl;
			totalScore += 600 - (int)(end - start);
			break;
		}
		char cInput = _getch();
		if (cInput == 'q' || cInput == 'Q') {
			cout << "게임 종료";
			return;
		}
		MovePlayer(StrmazeStage1, &tPlayer);
	}

	
}

void Miro2(int& totalScore)
{
	time_t start, end;
	start = time(NULL);
	Cursorhide();

	SetMazeStage2(StrmazeStage2, &tPlayer, &tStartpos, &tEndpos);
	while (true) {
		system("cls");
		gotoxy(0, 0);
		//OutPutMazeStage2(StrmazeStage2, &tPlayer);
		OutPutMaze(StrmazeStage2, &tPlayer);
		cout << endl << "q : 종료" << endl;
		cout << "방향키로 움직여 ◎ 지점에 도착하세요." << endl;
		if (tPlayer.tPos.x == tEndpos.x && tPlayer.tPos.y == tEndpos.y) {
			end = time(NULL);
			cout << "미로 클리어!" << endl;
			cout << 600 - (int)(end - start) << "점 획득!" << endl;
			totalScore += 600 - (int)(end - start);
			break;
		}
		char cInput = _getch();
		if (cInput == 'q' || cInput == 'Q') break;

		MovePlayer(StrmazeStage2, &tPlayer);
	}
}

void Miro3(int& totalScore) {

	time_t start, end;
	start = time(NULL);
	Cursorhide();

	SetMazeStage3(StrmazeStage3, &tPlayer, &tStartpos, &tEndpos);

	while (true) {
		system("cls");
		gotoxy(0, 0);
		//OutPutMazeStage1(StrmazeStage1, &tPlayer);
		OutPutMaze(StrmazeStage3, &tPlayer);
		cout << endl << "q : 종료" << endl;
		cout << "방향키로 움직여 ◎ 지점에 도착하세요." << endl;
		if (tPlayer.tPos.x == tEndpos.x && tPlayer.tPos.y == tEndpos.y) {
			end = time(NULL);
			cout << endl << "미로 클리어!" << endl;
			cout << 600 - (int)(end - start) << "점 획득!" << endl;
			totalScore += 600 - (int)(end - start);
			break;
		}
		char cInput = _getch();
		if (cInput == 'q' || cInput == 'Q') {
			cout << "게임 종료";
			return;
		}
		MovePlayer(StrmazeStage3, &tPlayer);
	}



}

void Miro4(int& totalScore) {

	time_t start, end;
	start = time(NULL);
	Cursorhide();

	SetMazeStage4(StrmazeStage4, &tPlayer, &tStartpos, &tEndpos);

	while (true) {
		system("cls");
		gotoxy(0, 0);
		OutPutMaze(StrmazeStage4, &tPlayer);
		cout << endl << "q : 종료" << endl;
		cout << "방향키로 움직여 ◎ 지점에 도착하세요." << endl;
		if (tPlayer.tPos.x == tEndpos.x && tPlayer.tPos.y == tEndpos.y) {
			end = time(NULL);
			cout << endl << "미로 클리어!" << endl;
			cout << 600 - (int)(end - start) << "점 획득!" << endl;
			totalScore += 600 - (int)(end - start);
			break;
		}
		char cInput = _getch();
		if (cInput == 'q' || cInput == 'Q') {
			cout << "게임 종료";
			return;
		}
		MovePlayer(StrmazeStage4, &tPlayer);
	}


}

void Miro5(int& totalScore) {

	time_t start, end;
	start = time(NULL);
	Cursorhide();

	SetMazeStage5(StrmazeStage5, &tPlayer, &tStartpos, &tEndpos);

	while (true) {
		system("cls");
		gotoxy(0, 0);
		OutPutMaze(StrmazeStage5, &tPlayer);
		cout << endl << "q : 종료" << endl;
		cout << "방향키로 움직여 ◎ 지점에 도착하세요." << endl;
		if (tPlayer.tPos.x == tEndpos.x && tPlayer.tPos.y == tEndpos.y) {
			end = time(NULL);
			cout << endl << "미로 클리어!" << endl;
			cout << 600 - (int)(end - start) << "점 획득!" << endl;
			totalScore += 600 - (int)(end - start);
			break;
		}
		char cInput = _getch();
		if (cInput == 'q' || cInput == 'Q') {
			cout << "게임 종료";
			return;
		}
		MovePlayer(StrmazeStage5, &tPlayer);
	}


}