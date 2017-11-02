/*
 * 337A - Puzzles.cpp
 * http://codeforces.com/problemset/problem/337/A
 *  Created on: Nov 2, 2017
 *      Author: athena
 * 31990749 	337A - 9 	GNU C++14 	Accepted 	30 ms 	4 KB 	2017-11-02 22:20:47 	2017-11-02 22:20:48
 */

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, m, f[1000];
	cin >> n >> m;


	for (int i = 0; i < m; i++) {
		cin >> f[i];
	}

	sort(f, f+m);

	int min = f[n-1] - f[0];

	for (int j = 1; j <= m - n; j++) {
		if (f[j+n-1] - f[j] < min) {
			min = f[j+n-1] - f[j];
		}
	}

	cout << min << endl;

	return 0;
}
