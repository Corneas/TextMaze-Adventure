#include <Windows.h>

using namespace std;

void Cursorhide() {
	CONSOLE_CURSOR_INFO curinfo;
	curinfo.bVisible = false;
	curinfo.dwSize = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &curinfo);
}