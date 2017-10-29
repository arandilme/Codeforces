/*
 * 271A - Beautiful Year.cpp
 * http://codeforces.com/problemset/problem/271/A
 *  Created on: Oct 29, 2017
 *      Author: athena
 * 31874647 	271A - 11 	GNU C++14 	Accepted 	30 ms 	8 KB 	2017-10-29 21:29:57 	2017-10-29 21:29:58
 */

#include <iostream>
using namespace std;

int main() {
	int y;
	cin >> y;

	while (1) {
		y++;
		int a = y / 1000;
		int b = y / 100 % 10;
		int c = y / 10 % 10;
		int d = y % 10;

		if (a != b && a!= c && a != d && b != c && b != d && c != d) {
			break;
		}
	}

	cout << y << endl;

	return 0;
}

