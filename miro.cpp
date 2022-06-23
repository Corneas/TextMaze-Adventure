#include "miro.h"
#include "console.h"

using namespace std;

void SetMazeStage1(char Maze[HEIGHT][WEIGHT], PPLAYER pPlayer, PPOS pStartpos, PPOS pEndpos) {
	srand((unsigned int)time(NULL));
	int stage1 = rand() % 2;
	if (stage1 == 0) {
		pStartpos->x = 0;
		pStartpos->y = 1;
		pEndpos->x = 9;
		pEndpos->y = 1;
			
		pPlayer->tPos = *pStartpos;

		strcpy_s(Maze[0], "1111111111");
		strcpy_s(Maze[1], "2010101003");
		strcpy_s(Maze[2], "1000101101");
		strcpy_s(Maze[3], "1010101101");
		strcpy_s(Maze[4], "1010001101");
		strcpy_s(Maze[5], "1011011101");
		strcpy_s(Maze[6], "1010100001");
		strcpy_s(Maze[7], "1011001101");
		strcpy_s(Maze[8], "1000011101");
		strcpy_s(Maze[9], "1111111111");
	}
	else if (stage1 == 1) {
		pStartpos->x = 1;
		pStartpos->y = 0;
		pEndpos->x = 8;
		pEndpos->y = 9;

		pPlayer->tPos = *pStartpos;

		strcpy_s(Maze[0], "1211111111");
		strcpy_s(Maze[1], "1000000001");
		strcpy_s(Maze[2], "1010111111");
		strcpy_s(Maze[3], "1010000001");
		strcpy_s(Maze[4], "1011110101");
		strcpy_s(Maze[5], "1010000101");
		strcpy_s(Maze[6], "1111011111");
		strcpy_s(Maze[7], "1001010001");
		strcpy_s(Maze[8], "1100000101");
		strcpy_s(Maze[9], "1111111131");
	}

}
void SetMazeStage2(char Maze[HEIGHT][WEIGHT], PPLAYER pPlayer, PPOS pStartpos, PPOS pEndpos) {
	srand((unsigned int)time(NULL));
	int stage2 = rand() % 2;
	if (stage2 == 0) {
		pStartpos->x = 1;
		pStartpos->y = 0;
		pEndpos->x = 13;
		pEndpos->y = 14;

		pPlayer->tPos = *pStartpos;

		strcpy_s(Maze[0],  "121111111111111");
		strcpy_s(Maze[1],  "101010000000001");
		strcpy_s(Maze[2],  "101010101010001");
		strcpy_s(Maze[3],  "101010101111101");
		strcpy_s(Maze[4],  "101000100000001");
		strcpy_s(Maze[5],  "101010111111011");
		strcpy_s(Maze[6],  "101010100001011");
		strcpy_s(Maze[7],  "100010101111011");
		strcpy_s(Maze[8],  "101010101000011");
		strcpy_s(Maze[9],  "101110101110111");
		strcpy_s(Maze[10], "101011101010101");
		strcpy_s(Maze[11], "101000001000001");
		strcpy_s(Maze[12], "101011011101111");
		strcpy_s(Maze[13], "100010000100001");
		strcpy_s(Maze[14], "111111111111131");
	}
	else if (stage2 == 1) {
		pStartpos->x = 0;
		pStartpos->y = 1;
		pEndpos->x = 14;
		pEndpos->y = 7;

		pPlayer->tPos = *pStartpos;

		strcpy_s(Maze[0],  "111111111111111");
		strcpy_s(Maze[1],  "200000000000001");
		strcpy_s(Maze[2],  "101111011111101");
		strcpy_s(Maze[3],  "101001000000001");
		strcpy_s(Maze[4],  "101011111011111");
		strcpy_s(Maze[5],  "101010101000001");
		strcpy_s(Maze[6],  "101010101111111");
		strcpy_s(Maze[7],  "100000101000003");
		strcpy_s(Maze[8],  "101111000011111");
		strcpy_s(Maze[9],  "101000011110001");
		strcpy_s(Maze[10], "101110001111101");
		strcpy_s(Maze[11], "100011100001001");
		strcpy_s(Maze[12], "101000111011011");
		strcpy_s(Maze[13], "101010000000001");
		strcpy_s(Maze[14], "111111111111111");
	}

}
void SetMazeStage3(char Maze[HEIGHT][WEIGHT], PPLAYER pPlayer, PPOS pStartpos, PPOS pEndpos) {
	srand((unsigned int)time(NULL));
	int stage3 = rand() % 2;

	if (stage3 == 0) {
		pStartpos->x = 6;
		pStartpos->y = 0;
		pEndpos->x = 7;
		pEndpos->y = 14;

		pPlayer->tPos = *pStartpos;

		strcpy_s(Maze[0], "111111211111111");
		strcpy_s(Maze[1], "100000000000001");
		strcpy_s(Maze[2], "101111111111101");
		strcpy_s(Maze[3], "100000000000001");
		strcpy_s(Maze[4], "110111101111011");
		strcpy_s(Maze[5], "100100001001001");
		strcpy_s(Maze[6], "101100111011101");
		strcpy_s(Maze[7], "101010000010101");
		strcpy_s(Maze[8], "100011111000101");
		strcpy_s(Maze[9], "110110001110101");
		strcpy_s(Maze[10], "110100101000101");
		strcpy_s(Maze[11], "110101101010101");
		strcpy_s(Maze[12], "100101011011101");
		strcpy_s(Maze[13], "110001000010001");
		strcpy_s(Maze[14], "111111131111111");
	}
	else if (stage3 == 1) {
		pStartpos->x = 13;
		pStartpos->y = 0;
		pEndpos->x = 14;
		pEndpos->y = 13;

		pPlayer->tPos = *pStartpos;

		strcpy_s(Maze[0], "111111111111121");
		strcpy_s(Maze[1], "100000000000001");
		strcpy_s(Maze[2], "110101111111111");
		strcpy_s(Maze[3], "100001000000001");
		strcpy_s(Maze[4], "101011010110101");
		strcpy_s(Maze[5], "100001011100101");
		strcpy_s(Maze[6], "110111000101001");
		strcpy_s(Maze[7], "100010010101101");
		strcpy_s(Maze[8], "101011010100111");
		strcpy_s(Maze[9], "100100010010001");
		strcpy_s(Maze[10], "101101111110101");
		strcpy_s(Maze[11], "101000011000101");
		strcpy_s(Maze[12], "101011011011111");
		strcpy_s(Maze[13], "100001011000003");
		strcpy_s(Maze[14], "111111111111111");
	}
}
void SetMazeStage4(char Maze[HEIGHT][WEIGHT], PPLAYER pPlayer, PPOS pStartpos, PPOS pEndpos) {
	srand((unsigned int)time(NULL));
	int stage4 = rand() % 2;

	if (stage4 == 0) {
		pStartpos->x = 0;
		pStartpos->y = 1;
		pEndpos->x = 0;
		pEndpos->y = 13;

		pPlayer->tPos = *pStartpos;

		strcpy_s(Maze[0],  "111111111111111");
		strcpy_s(Maze[1],  "200010000100001");
		strcpy_s(Maze[2],  "111011110001101");
		strcpy_s(Maze[3],  "100010000101001");
		strcpy_s(Maze[4],  "101110111101101");
		strcpy_s(Maze[5],  "100000010000001");
		strcpy_s(Maze[6],  "111101111101111");
		strcpy_s(Maze[7],  "100101010100001");
		strcpy_s(Maze[8],  "101100000101111");
		strcpy_s(Maze[9],  "101101110100001");
		strcpy_s(Maze[10], "100101011111101");
		strcpy_s(Maze[11], "110100001001001");
		strcpy_s(Maze[12], "110111111011011");
		strcpy_s(Maze[13], "300000000000001");
		strcpy_s(Maze[14], "111111111111111");

	}
	else if (stage4 == 1) {
		pStartpos->x = 14;
		pStartpos->y = 1;
		pEndpos->x = 14;
		pEndpos->y = 13;

		pPlayer->tPos = *pStartpos;

		strcpy_s(Maze[0],  "111111111111111");
		strcpy_s(Maze[1],  "100000101000102");
		strcpy_s(Maze[2],  "111100000010101");
		strcpy_s(Maze[3],  "100101001110101");
		strcpy_s(Maze[4],  "110101100010001");
		strcpy_s(Maze[5],  "110000111110111");
		strcpy_s(Maze[6],  "100110110100001");
		strcpy_s(Maze[7],  "101110010111011");
		strcpy_s(Maze[8],  "100011010100001");
		strcpy_s(Maze[9],  "111011010110111");
		strcpy_s(Maze[10], "100011000110101");
		strcpy_s(Maze[11], "111010110000001");
		strcpy_s(Maze[12], "100010111111111");
		strcpy_s(Maze[13], "101000000000003");
		strcpy_s(Maze[14], "111111111111111");

	}

}
void SetMazeStage5(char Maze[HEIGHT][WEIGHT], PPLAYER pPlayer, PPOS pStartpos, PPOS pEndpos) {
	srand((unsigned int)time(NULL));
	int stage5 = rand() % 2;

	if (stage5 == 0) {
		pStartpos->x = 1;
		pStartpos->y = 0;
		pEndpos->x = 13;
		pEndpos->y = 14;

		pPlayer->tPos = *pStartpos;

		strcpy_s(Maze[0],  "121111111111111");
		strcpy_s(Maze[1],  "100010010000101");
		strcpy_s(Maze[2],  "111011000110101");
		strcpy_s(Maze[3],  "100000011110001");
		strcpy_s(Maze[4],  "101011110010101");
		strcpy_s(Maze[5],  "101000011011101");
		strcpy_s(Maze[6],  "101111010000001");
		strcpy_s(Maze[7],  "100011010110111");
		strcpy_s(Maze[8],  "111000010010101");
		strcpy_s(Maze[9],  "100011110110101");
		strcpy_s(Maze[10], "111110000000001");
		strcpy_s(Maze[11], "100001110111011");
		strcpy_s(Maze[12], "101111010101111");
		strcpy_s(Maze[13], "100000000000001");
		strcpy_s(Maze[14], "111111111111131");

	}
	else if (stage5 == 1) {
		pStartpos->x = 14;
		pStartpos->y = 1;
		pEndpos->x = 14;
		pEndpos->y = 13;

		pPlayer->tPos = *pStartpos;

		strcpy_s(Maze[0],  "111111121111111");
		strcpy_s(Maze[1],  "100010000100001");
		strcpy_s(Maze[2],  "101010110111101");
		strcpy_s(Maze[3],  "101000010000001");
		strcpy_s(Maze[4],  "101111011111101");
		strcpy_s(Maze[5],  "100001000010101");
		strcpy_s(Maze[6],  "111101011010101");
		strcpy_s(Maze[7],  "100101001010001");
		strcpy_s(Maze[8],  "101111101111111");
		strcpy_s(Maze[9],  "101000001000101");
		strcpy_s(Maze[10], "101011101110101");
		strcpy_s(Maze[11], "100001000000001");
		strcpy_s(Maze[12], "101111101111101");
		strcpy_s(Maze[13], "100001001000001");
		strcpy_s(Maze[14], "111111111311111");

	}

}

void OutPutMaze(char Maze[HEIGHT][WEIGHT], PPLAYER pPlayer) {
	for (int i = 0; i < HEIGHT; i++) {
		for (int j = 0; j < WEIGHT; j++) {
			if (pPlayer->tPos.x == j && pPlayer->tPos.y == i)
				cout << "¡Ù";
			else if (Maze[i][j] == '0')
				cout << "  ";
			else if (Maze[i][j] == '1')
				cout << "¡á";
			else if (Maze[i][j] == '2')
				cout << "¡Ú";
			else if (Maze[i][j] == '3')
				cout << "¡Ý";
		}
			cout << endl;
	}
}

#pragma region MovePlayer
void MovePlayer(char Maze[HEIGHT][WEIGHT], PPLAYER pPlayer) {
	if (GetAsyncKeyState(VK_UP) & 0X8000) {
		MoveUp(Maze, pPlayer);
		Sleep(50);
	}
	if (GetAsyncKeyState(VK_DOWN) & 0X8000) {
		MoveDown(Maze, pPlayer);
		Sleep(50);
	}
	if (GetAsyncKeyState(VK_LEFT) & 0X8000) {
		MoveLeft(Maze, pPlayer);
		Sleep(50);
	}
	if (GetAsyncKeyState(VK_RIGHT) & 0X8000) {
		MoveRight(Maze, pPlayer);
		Sleep(50);
	}
}

void MoveUp(char Maze[HEIGHT][WEIGHT], PPLAYER pPlayer) {
	if (pPlayer->tPos.y - 1 >= 0) {
		if (Maze[pPlayer->tPos.y - 1][pPlayer->tPos.x] != '1') {
			--pPlayer->tPos.y;
		}
	}
}

void MoveDown(char Maze[HEIGHT][WEIGHT], PPLAYER pPlayer) {
	if (pPlayer->tPos.y + 1 >= 0) {
		if (Maze[pPlayer->tPos.y + 1][pPlayer->tPos.x] != '1') {
			++pPlayer->tPos.y;
		}
	}
}

void MoveLeft(char Maze[HEIGHT][WEIGHT], PPLAYER pPlayer) {
	if (pPlayer->tPos.x - 1 >= 0) {
		if (Maze[pPlayer->tPos.y][pPlayer->tPos.x - 1] != '1') {
			--pPlayer->tPos.x;
		}
	}
}

void MoveRight(char Maze[HEIGHT][WEIGHT], PPLAYER pPlayer) {
	if (pPlayer->tPos.x + 1 >= 0) {
		if (Maze[pPlayer->tPos.y][pPlayer->tPos.x + 1] != '1') {
			++pPlayer->tPos.x;
		}
	}
}
#pragma endregion