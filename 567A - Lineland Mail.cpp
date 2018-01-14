/*
 * 567A - Lineland Mail.cpp
 * http://codeforces.com/problemset/problem/567/A
 *  Created on: Jan 15, 2018
 *      Author: athena
 * 34185580 	567A - 13 	GNU C++14 	Accepted 	374 ms 	2240 KB 	2018-01-15 01:30:25 	2018-01-15 01:30:25
 */

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;

	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	cout << a[1] - a[0] << " " << a[n-1] - a[0] << endl;

	for (int i = 1; i < n -1; i++) {
		cout << min(a[i] - a[i-1], a[i+1] - a[i]) << " " << max(a[i] - a[0], a[n-1] - a[i]) << endl;
	}

	cout << a[n-1] - a[n-2] << " " << a[n-1] - a[0] << endl;

	return 0;
}
