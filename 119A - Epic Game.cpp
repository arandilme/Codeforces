/*
 * 119A - Epic Game.cpp
 * http://codeforces.com/problemset/problem/119/A
 *  Created on: Jan 14, 2018
 *      Author: athena
 * 34163315 	119A - 21 	GNU C++14 	Accepted 	30 ms 	1860 KB 	2018-01-14 02:21:05 	2018-01-14 02:21:05
 */

#include <iostream>
using namespace std;

int gcd(int m, int n) {
	int r;

	while ((r = m % n) != 0) {
		m = n;
		n = r;
	}

	return n;
}

int main() {
	int a, b, n;
	cin >> a >> b >> n;

	while (1) {
		n -= gcd(a, n);

		if (n == 0) {
			cout << 0 << endl;
			break;
		}
		n -= gcd(b, n);

		if (n == 0) {
			cout << 1 << endl;
			break;
		}
	}

	return 0;
}
