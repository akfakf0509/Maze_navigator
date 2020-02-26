#include "Navigator.h"
#include "Vector.h"
#include <iostream>
#include <stack>

using namespace std;

void PrintMap(int* map, int size_x, int size_y) {

	for (int j = 0; j < size_y; j++) {
		for (int i = 0; i < size_x; i++) {
			if (map[size_x * j + i])
				cout << "бс";
			else
				cout << "бр";
		}
		cout << endl;
	}
}

void FindLoad(int* map) {
	stack<Vector> s;


}