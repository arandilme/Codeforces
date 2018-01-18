/*
 * 703A - Mishka and Game.cpp
 * http://codeforces.com/problemset/problem/703/A
 *  Created on: Jan 18, 2018
 *      Author: athena
 * 34279226 	703A - 17 	GNU C++14 	Accepted 	15 ms 	1856 KB 	2018-01-18 18:03:25 	2018-01-18 18:03:25
 */

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int countM(0), countC(0);

	for (int i = 0; i < n; i++) {
		int m, c;
		cin >> m >> c;

		if (m > c) {
			countM++;
		} else if (m < c) {
			countC++;
		}
	}

	if (countM > countC) {
		cout << "Mishka" << endl;
	} else if (countM < countC ){
		cout << "Chris" << endl;
	} else {
		cout << "Friendship is magic!^^" << endl;
	}

	return 0;
}
