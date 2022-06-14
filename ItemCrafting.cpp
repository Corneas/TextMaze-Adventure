#include "console.h"
#include "ItemCrafting.h"

using namespace std;

void ItemCrafting(int itemPart[]) {

	int item2ingredient = 0;

	for (int i = 0; i < 5; i++) {
		if (itemPart[i] == 5) {
			cout << "아이템1 제작 가능" << endl;
		}
		else if (itemPart[i] == 1) {
			item2ingredient++;
		}
	}

	if (item2ingredient == 5) {
		cout << "아이템2 제작 가능" << endl;
	}

	Item3(itemPart);
	Item4(itemPart);
	Item5(itemPart);

}

// 이후 시간복잡도를 고려하여 코드수정하기 (필수)

void Item3(int itemPart[]) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i == j) {
				continue;
			}
			if (itemPart[i] == 3 && itemPart[j] == 2) {
				cout << "아이템3 제작 가능" << endl;
				break;
			}
		}
	}
}

void Item4(int itemPart[]) {

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			for (int l = 0; l < 5; l++) {
				if (i == j || i == l || j == l) {
					continue;
				}
				if (itemPart[i] == 2 && itemPart[j] == 2 && itemPart[l] == 1) {
					cout << "아이템4 제작 가능" << endl;
					break;
				}
			}
		}
	}

}

void Item5(int itemPart[]) {
	int item5ingredient = 0;

	for (int i = 0; i < 5; i++) {
		if (itemPart[i] == 0) {
			item5ingredient++;
		}
	}

	if (item5ingredient == 5) {
		cout << "아이템5 제작 가능" << endl;
	}
}