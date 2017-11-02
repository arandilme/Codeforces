/*
 * 136A - Presents.cpp
 * http://codeforces.com/problemset/problem/136/A
 *  Created on: Nov 3, 2017
 *      Author: athena
 * 31992618 	136A - 9 	GNU C++14 	Accepted 	30 ms 	12 KB 	2017-11-02 23:50:38 	2017-11-02 23:50:38
 */

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int i, p[n], f[n];

	for (i = 1; i <= n; i++) {
		cin >> p[i];
		f[p[i]] = i;
	}

	for (i = 1; i <= n; i++) {
		cout << f[i] << " ";
	}

	return 0;
}
