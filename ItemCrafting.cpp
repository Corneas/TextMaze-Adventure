#include "console.h"
#include "ItemCrafting.h"

using namespace std;

void ItemCrafting(int itemPart[], int &totalScore) {

	int craftItem = -1;
	int item2ingredient = 0;

	bool isItem1Active = false;
	bool isItem2Active = false;
	bool isItem3Active = false;
	bool isItem4Active = false;
	bool isItem5Active = false;

	for (int i = 0; i < 5; i++) {
		if (itemPart[i] == 5) {
			//cout << "아이템1 제작 가능 (1번 아이템)" << endl;
			isItem1Active = true;
		}
		else if (itemPart[i] == 1) {
			item2ingredient++;
		}
	}

	if (isItem1Active) {
		cout << "아이템1 제작 가능" << endl;
	}
	else if (!isItem1Active) {
		cout << "아이템1 제작 불가" << endl;
	}

	if (item2ingredient == 5) {
		//cout << "아이템2 제작 가능 (2번 아이템)" << endl;
		isItem2Active = true;
	}

	if (isItem2Active) {
		cout << "아이템2 제작 가능" << endl;
	}
	else if (!isItem2Active) {
		cout << "아이템2 제작 불가" << endl;
	}

	Item3(itemPart, isItem3Active);
	Item4(itemPart, isItem4Active);
	Item5(itemPart, isItem5Active);

	cout << "몇번 아이템을 제작하겠습니까?" << endl;
	while (true) {
		cin >> craftItem;
		if (craftItem == 1) {
			if (isItem1Active) {
				// 스코어 +2000점
				totalScore += 2000;
				// 엔딩씬1
				EndingScene1();
			}
			else {
				cout << "제작불가!" << endl;
				continue;
			}
		}
		else if (craftItem == 2) {
			if (isItem2Active) {
				// 스코어 + 1800점
				totalScore += 1800;
				// 엔딩씬2
				EndingScene2();
			}
			else {
				cout << "제작불가!" << endl;
				continue;
			}
		}
		else if (craftItem == 3) {
			if (isItem3Active) {
				// 스코어 + 1700점
				totalScore += 1700;
				// 엔딩씬3
				EndingScene3();
			}
			else {
				cout << "제작불가!" << endl;
				continue;
			}
		}
		else if (craftItem == 4) {
			if (isItem4Active) {
				// 스코어 + 1500점
				totalScore += 1500;
				// 엔딩씬4
				EndingScene4();
			}
			else {
				cout << "제작불가!" << endl;
				continue;
			}
		}
		else if (craftItem == 5) {
			if (isItem5Active) {
				// 스코어 + 1000점
				totalScore += 1000;
				// 엔딩씬5
				EndingScene5();
			}
			else {
				cout << "제작불가!" << endl;
				continue;
			}
		}
		else {
			cout << "1번 ~ 5번사이의 숫자를 입력해주세요!" << endl;
		}

	}
	cout << "총합 스코어 : " << totalScore << "점";
	return;
}

void Item3(int itemPart[], bool &isItem3Active) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i == j) {
				continue;
			}
			if (itemPart[i] == 3 && itemPart[j] == 2) {
				//cout << "아이템3 제작 가능" << endl;
				isItem3Active = true;
				break;
			}
		}
	}

	if (isItem3Active) {
		cout << "아이템3 제작 가능" << endl;
	}
	else if(!isItem3Active) {
		cout << "아이템3 제작 불가" << endl;
	}
}

void Item4(int itemPart[], bool &isItem4Active) {

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			for (int l = 0; l < 5; l++) {
				if (i == j || i == l || j == l) {
					continue;
				}
				if (itemPart[i] == 2 && itemPart[j] == 2 && itemPart[l] == 1) {
					//cout << "아이템4 제작 가능" << endl;
					isItem4Active = true;
					break;
				}
			}
		}
	}

	if (isItem4Active) {
		cout << "아이템4 제작 가능" << endl;
	}
	else if (!isItem4Active) {
		cout << "아이템4 제작 불가" << endl;
	}
}

void Item5(int itemPart[], bool &isItem5Active) {
	int item5ingredient = 0;

	for (int i = 0; i < 5; i++) {
		if (itemPart[i] == 0) {
			item5ingredient++;
		}
	}

	if (item5ingredient == 5) {
		//cout << "아이템5 제작 가능" << endl;
		isItem5Active = true;
	}

	if (isItem5Active) {
		cout << "아이템5 제작 가능" << endl;
	}
	else if (!isItem5Active) {
		cout << "아이템5 제작 불가" << endl;
	}
}