#include "console.h"
#include "ItemCrafting.h"

using namespace std;

void ItemCrafting(int itemPart[]) {

	int item2ingredient = 0;

	for (int i = 0; i < 5; i++) {
		if (itemPart[i] == 5) {
			cout << "������1 ���� ����" << endl;
		}
		else if (itemPart[i] == 1) {
			item2ingredient++;
		}
	}

	if (item2ingredient == 5) {
		cout << "������2 ���� ����" << endl;
	}

}