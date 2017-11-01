/*
 * 451A - Game With Sticks.cpp
 * http://codeforces.com/problemset/problem/451/A
 *  Created on: Nov 2, 2017
 *      Author: athena
 * 31962962 	451A - 29 	GNU C++14 	Accepted 	15 ms 	12 KB 	2017-11-01 23:52:41 	2017-11-01 23:52:41
 */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int m, n;
	cin >> m >> n;

	if (min(n, m) % 2) {
		cout << "Akshat" << endl;
	} else {
		cout << "Malvika" << endl;
	}

	return 0;
}
