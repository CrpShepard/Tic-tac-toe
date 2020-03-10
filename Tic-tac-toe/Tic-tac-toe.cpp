#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;

int main() {
	int A[9] = { 0,0,0,0,0,0,0,0 };
	int i, pos, aipos, non = 0;
	bool w = false;

	cout << "Tic-tac-toe (Player vs AI)\nGame started!\n";
	for (;;) {
		for (i = 1; i < 10; i++) {
			cout << A[i - 1] << " ";
			if (i > 2 && i % 3 == 0) {
				cout << endl;
			}
		}
		cout << "\n";
		for (i = 1; i < 10; i++) {
			if (A[i - 1] > 0) {
				if (A[i - 1] == A[i] && A[i - 1] == A[i + 1] && i % 3 == 1) {
					if (A[i - 1] == 1) {
						cout << "Player won!\n";
					}
					else {
						cout << "AI won!\n";
					}
					w = true;
					break;
				}
				if (A[i - 1] == A[i + 2] && A[i - 1] == A[i + 5] && (i == 1 || i == 2 || i == 3)) {
					if (A[i - 1] == 1) {
						cout << "Player won!\n";
					}
					else {
						cout << "AI won!\n";
					}
					w = true;
					break;
				}
				if (A[i - 1] == A[i + 3] && A[i - 1] == A[i + 7] && i == 1) {
					if (A[i - 1] == 1) {
						cout << "Player won!\n";
					}
					else {
						cout << "AI won!\n";
					}
					w = true;
					break;
				}
				if (A[i - 1] == A[i + 1] && A[i - 1] == A[i + 3] && i == 3) {
					if (A[i - 1] == 1) {
						cout << "Player won!\n";
					}
					else {
						cout << "AI won!\n";
					}
					w = true;
					break;
				}
			}
		}
		for (i = 0; i < 9; i++) {
			if (A[i] < 1) {
				non++;
			}
		}
		if (non == 0) {
			cout << "\n";
			cout << "Draw\n";
			w = true;
		}
		non = 0;
		if (w == true) {
			break;
		}
		for (;;) {
			cout << "Enter position number (1-9)...\n";
			cin >> pos;
			if (A[pos - 1] != 1 && A[pos - 1] != 2) {
				A[pos - 1] = 1;
				break;
			}
			else {
				cout << "Position already taked! Try another one!\n";
			}
		}
		cout << "\n";
		for (i = 1; i < 10; i++) {
			cout << A[i - 1] << " ";
			if (i > 2 && i % 3 == 0) {
				cout << endl;
			}
		}
		for (i = 1; i < 10; i++) {
			if (A[i - 1] > 0) {
				if (A[i - 1] == A[i] && A[i - 1] == A[i + 1] && i % 3 == 1) {
					if (A[i - 1] == 1) {
						cout << "Player won!\n";
					}
					else {
						cout << "AI won!\n";
					}
					w = true;
					break;
				}
				if (A[i - 1] == A[i + 2] && A[i - 1] == A[i + 5] && (i == 1 || i == 2 || i == 3)) {
					if (A[i - 1] == 1) {
						cout << "Player won!\n";
					}
					else {
						cout << "AI won!\n";
					}
					w = true;
					break;
				}
				if (A[i - 1] == A[i + 3] && A[i - 1] == A[i + 7] && i == 1) {
					if (A[i - 1] == 1) {
						cout << "Player won!\n";
					}
					else {
						cout << "AI won!\n";
					}
					w = true;
					break;
				}
				if (A[i - 1] == A[i + 1] && A[i - 1] == A[i + 3] && i == 3) {
					if (A[i - 1] == 1) {
						cout << "Player won!\n";
					}
					else {
						cout << "AI won!\n";
					}
					w = true;
					break;
				}
			}
		}
		for (i = 0; i < 9; i++) {
			if (A[i] < 1) {
				non++;
			}
		}
		if (non == 0) {
			cout << "\n";
			cout << "Draw\n";
			w = true;
		}
		non = 0;
		if (w == true) {
			break;
		}
		cout << "\n";
		srand(time(NULL));
		for (;;) {
			aipos = rand() % 9;
			if(A[aipos] != 2 && A[aipos] != 1) {
				A[aipos] = 2;
				break;
			}
		}
	}
	system("pause");
}