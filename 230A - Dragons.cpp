/*
 * 230A - Dragons.cpp
 * http://codeforces.com/problemset/problem/230/A
 *  Created on: Jan 13, 2018
 *      Author: athena
 * 34115911 	230A - 52 	GNU C++14 	Accepted 	30 ms 	1856 KB 	2018-01-13 02:16:03 	2018-01-13 02:16:03
 */

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int s, n;
	cin >> s >> n;

	pair<int, int>a[1000];

	for (int i = 0; i < n; i++) {
		cin >> a[i].first >> a[i].second;
	}

	sort(a, a + n);

	for (int i = 0; i < n; i++) {
		if (a[i].first < s) {
			s += a[i].second;
		} else {
			cout << "NO" << endl;
			return 0;
		}
	}

	cout << "YES" << endl;

	return 0;
}
