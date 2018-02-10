/*
 * 701A - Cards.cpp
 * http://codeforces.com/problemset/problem/701/A
 *  Created on: Feb 11, 2018
 *      Author: athena
 * 35137619 	701A - 14 	GNU C++14 	Accepted 	15 ms 	1856 KB 	2018-02-11 00:13:20 	2018-02-11 00:13:20
 */

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;

	pair<int, int> a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i].first;
		a[i].second = i + 1;
	}

	sort(a, a+n);

	for (int i = 0; i < n/2; i++) {
		cout << a[i].second << " " << a[n-i-1].second << endl;
	}

	return 0;
}
