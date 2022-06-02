#pragma once
#include "console.h"

const int HEIGHT = 16;
const int WEIGHT = 16;

typedef struct _pos {
	int x;
	int y;
}POS, *PPOS;

typedef struct _player {
	_pos tPos;
}PLAYER, *PPLAYER;

void SetMazeStage1(char Maze[HEIGHT][WEIGHT], PPLAYER pPlayer, PPOS pStartpos, PPOS pEndpos);
void OutPutMazeStage1(char Maze[HEIGHT][WEIGHT], PPLAYER pPlayer);
void SetMazeStage2(char Maze[HEIGHT][WEIGHT], PPLAYER pPlayer, PPOS pStartpos, PPOS pEndpos);
void OutPutMazeStage2(char Maze[HEIGHT][WEIGHT], PPLAYER pPlayer);

void MovePlayer(char Maze[HEIGHT][WEIGHT], PPLAYER pPlayer);
void MoveUp(char Maze[HEIGHT][WEIGHT], PPLAYER pPlayer);
void MoveDown(char Maze[HEIGHT][WEIGHT], PPLAYER pPlayer);
void MoveLeft(char Maze[HEIGHT][WEIGHT], PPLAYER pPlayer);
void MoveRight(char Maze[HEIGHT][WEIGHT], PPLAYER pPlayer);

void MovePlayer(char Maze[HEIGHT][WEIGHT], PPLAYER pPlayer);
void MoveUp(char Maze[HEIGHT][WEIGHT], PPLAYER pPlayer);
void MoveDown(char Maze[HEIGHT][WEIGHT], PPLAYER pPlayer);
void MoveLeft(char Maze[HEIGHT][WEIGHT], PPLAYER pPlayer);
void MoveRight(char Maze[HEIGHT][WEIGHT], PPLAYER pPlayer);