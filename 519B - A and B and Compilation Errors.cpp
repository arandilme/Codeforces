/*
 * 519B - A and B and Compilation Errors.cpp
 * http://codeforces.com/problemset/problem/519/B
 *  Created on: Jan 28, 2018
 *      Author: athena
 * 34641642 	519B - 22 	GNU C++14 	Accepted 	608 ms 	1852 KB 	2018-01-28 21:59:03 	2018-01-28 21:59:03
 */

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int x(0);
	long long int a(0), b(0), c(0);

	for (int i = 0; i < n; i++) {
		cin >> x;
		a += x;
	}

	for (int i = 0; i < n - 1; i++) {
			cin >> x;
			b += x;
		}

	for (int i = 0; i < n - 2; i++) {
			cin >> x;
			c += x;
		}

	cout << a - b << " " << b - c << endl;

	return 0;
}
