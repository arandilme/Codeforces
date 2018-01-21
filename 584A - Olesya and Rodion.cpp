/*
 * 584A - Olesya and Rodion.cpp
 * http://codeforces.com/problemset/problem/584/A
 *  Created on: Jan 22, 2018
 *      Author: athena
 * 34424445 	584A - 37 	GNU C++14 	Accepted 	30 ms 	1856 KB 	2018-01-21 23:19:37 	2018-01-21 23:19:37
 */

#include <iostream>
using namespace std;

int main() {
	int n, t;
	cin >> n >> t;

	if (n == 1 && t == 10) {
		cout << "-1" << endl;
		return 0;
	}

	int a(1);

	if (t == 10) {
		a++;
	}

	cout << t;

	for (int i = 1; i <= n - a; i++) {
		cout << 0;
	}

	return 0;
}
