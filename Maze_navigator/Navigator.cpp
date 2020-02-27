#include "Navigator.h"
#include "Vector.h"
#include <iostream>
#include <stack>
#include <conio.h>

using namespace std;

void PrintMap(int* map, int size_x, int size_y) {
	system("cls");

	for (int j = 0; j < size_y; j++) {
		for (int i = 0; i < size_x; i++) {
			switch (map[size_x * j + i]) {
			case 0:
				cout << "бр";
				break;
			case 1:
				cout << "бс";
				break;
			case 2:
				cout << "в╞";
				break;
			case 3:
				cout << "бр";
				break;
			}
		}
		cout << endl;
	}
	cout << "press 'n' to continue" << endl;
}

void FindLoad(int* map, int size_x, int size_y, Vector start_, Vector goal_) {
	stack<Vector> s;

	Vector position = start_;
	Vector goal = goal_;
	
	PrintMap(map, size_x, size_y);

	while (position != goal) {
		map[size_x * position.GetY() + position.GetX()] = 2;
		PrintMap(map, size_x, size_y);
		while (_getch() != 'n');
		if (position.GetX() + 1 < size_x && !map[size_x * position.GetY() + position.GetX() + 1]) { //x++
			position.SetX(position.GetX() + 1);
			s.push(position);
		}
		else if (position.GetY() + 1 < size_y && !map[size_x * (position.GetY() + 1) + position.GetX()]) { //y++
			position.SetY(position.GetY() + 1);
			s.push(position);
		}
		else if (position.GetX() - 1 >= 0 && !map[size_x * position.GetY() + position.GetX() - 1]) { //x--
			position.SetX(position.GetX() - 1);
			s.push(position);
		}
		else if (position.GetY() - 1 >= 0 && !map[size_x * (position.GetY() - 1) + position.GetX()]) { //y--
			position.SetY(position.GetY() - 1);
			s.push(position);
		}
		else {
			map[size_x * position.GetY() + position.GetX()] = 3;
			s.pop();
			position = s.top();
		}
	}

	map[size_x * position.GetY() + position.GetX()] = 2;
	PrintMap(map, size_x, size_y);
}