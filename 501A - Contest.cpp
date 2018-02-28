/*
 * 501A - Contest.cpp
 * http://codeforces.com/problemset/problem/501/A
 *  Created on: Mar 1, 2018
 *      Author: athena
 * 35797602 	501A - 20 	GNU C++14 	Accepted 	15 ms 	1856 KB 	2018-03-01 01:10:55 	2018-03-01 01:10:55
 */

#include <iostream>
using namespace std;

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	int Misha = max((3 * a) / 10, a - (a / 250) * c);
	int Vasya = max((3 * b) / 10, b - (b / 250) * d);

	if (Misha > Vasya) {
		cout << "Misha" << endl;
	} else if (Misha < Vasya) {
		cout << "Vasya" << endl;
	} else {
		cout << "Tie" << endl;
	}

	return 0;
}
