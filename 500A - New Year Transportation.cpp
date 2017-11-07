/*
 * 500A - New Year Transportation.cpp
 * http://codeforces.com/problemset/problem/500/A
 *  Created on: Nov 8, 2017
 *      Author: athena
 * 32130139 	500A - 33 	GNU C++14 	Accepted 	46 ms 	116 KB 	2017-11-07 23:28:00 	2017-11-07 23:28:00
 */

#include <iostream>
using namespace std;

int main() {
	int n, t;
	cin >> n >> t;

	int a[n+1];

	for (int i = 1; i < n; i++) {
		cin >> a[i];
	}

	a[n] = 1;

	for (int j = 1; j <= n; j += a[j]) {
		if (j == t) {
			cout << "YES";
			return 0;
		}
	}

	cout << "NO" << endl;

	return 0;

}
