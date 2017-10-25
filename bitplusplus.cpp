/*
 * bitplusplus.cpp
 *
 *  Created on: Oct 23, 2017
 *      Author: athena
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;

	int x = 0;
	string operation;

	for (int i = 0; i < n; i++) {
		cin >> operation;
		if (operation[1] == '+') {
			x++;
		} else {
			x--;
		}
	}

	cout << x << endl;

	return 0;
}
