/*
 * 577A - Multiplication Table.cpp
 * http://codeforces.com/problemset/problem/577/A
 *  Created on: Jan 9, 2018
 *      Author: athena
 * 34035305 	577A - 20 	GNU C++14 	Accepted 	15 ms 	1856 KB 	2018-01-08 23:21:19 	2018-01-08 23:21:19
 */

#include <iostream>
using namespace std;

int main() {
	int n, x;
	cin >> n >> x;

	int count(0);

	for (int i = 1; i <= n; i++) {
		if (x % i == 0 && x / i <= n) {
			count++;
		}
	}

	cout << count << endl;

	return 0;
}
