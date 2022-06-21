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
			//cout << "������1 ���� ���� (1�� ������)" << endl;
			isItem1Active = true;
		}
		else if (itemPart[i] == 1) {
			item2ingredient++;
		}
	}

	if (isItem1Active) {
		cout << "������1 ���� ����" << endl;
	}
	else if (!isItem1Active) {
		cout << "������1 ���� �Ұ�" << endl;
	}

	if (item2ingredient == 5) {
		//cout << "������2 ���� ���� (2�� ������)" << endl;
		isItem2Active = true;
	}

	if (isItem2Active) {
		cout << "������2 ���� ����" << endl;
	}
	else if (!isItem2Active) {
		cout << "������2 ���� �Ұ�" << endl;
	}

	Item3(itemPart, isItem3Active);
	Item4(itemPart, isItem4Active);
	Item5(itemPart, isItem5Active);

	cout << "��� �������� �����ϰڽ��ϱ�?" << endl;
	while (true) {
		cin >> craftItem;
		if (craftItem == 1) {
			if (isItem1Active) {
				// ���ھ� +2000��
				totalScore += 2000;
				// ������1
				EndingScene1();
			}
			else {
				cout << "���ۺҰ�!" << endl;
				continue;
			}
		}
		else if (craftItem == 2) {
			if (isItem2Active) {
				// ���ھ� + 1800��
				totalScore += 1800;
				// ������2
				EndingScene2();
			}
			else {
				cout << "���ۺҰ�!" << endl;
				continue;
			}
		}
		else if (craftItem == 3) {
			if (isItem3Active) {
				// ���ھ� + 1700��
				totalScore += 1700;
				// ������3
				EndingScene3();
			}
			else {
				cout << "���ۺҰ�!" << endl;
				continue;
			}
		}
		else if (craftItem == 4) {
			if (isItem4Active) {
				// ���ھ� + 1500��
				totalScore += 1500;
				// ������4
				EndingScene4();
			}
			else {
				cout << "���ۺҰ�!" << endl;
				continue;
			}
		}
		else if (craftItem == 5) {
			if (isItem5Active) {
				// ���ھ� + 1000��
				totalScore += 1000;
				// ������5
				EndingScene5();
			}
			else {
				cout << "���ۺҰ�!" << endl;
				continue;
			}
		}
		else {
			cout << "1�� ~ 5�������� ���ڸ� �Է����ּ���!" << endl;
		}

	}
	cout << "���� ���ھ� : " << totalScore << "��";
	return;
}

void Item3(int itemPart[], bool &isItem3Active) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i == j) {
				continue;
			}
			if (itemPart[i] == 3 && itemPart[j] == 2) {
				//cout << "������3 ���� ����" << endl;
				isItem3Active = true;
				break;
			}
		}
	}

	if (isItem3Active) {
		cout << "������3 ���� ����" << endl;
	}
	else if(!isItem3Active) {
		cout << "������3 ���� �Ұ�" << endl;
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
					//cout << "������4 ���� ����" << endl;
					isItem4Active = true;
					break;
				}
			}
		}
	}

	if (isItem4Active) {
		cout << "������4 ���� ����" << endl;
	}
	else if (!isItem4Active) {
		cout << "������4 ���� �Ұ�" << endl;
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
		//cout << "������5 ���� ����" << endl;
		isItem5Active = true;
	}

	if (isItem5Active) {
		cout << "������5 ���� ����" << endl;
	}
	else if (!isItem5Active) {
		cout << "������5 ���� �Ұ�" << endl;
	}
}