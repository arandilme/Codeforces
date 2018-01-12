/*
 * 677A - Vanya and Fence.cpp
 * http://codeforces.com/problemset/problem/677/A
 *  Created on: Jan 13, 2018
 *      Author: athena
 * 34115751 	677A - 10 	GNU C++14 	Accepted 	15 ms 	1856 KB 	2018-01-13 01:53:27 	2018-01-13 01:53:27
 */

#include <iostream>
using namespace std;

int main() {
	int n, h;
	cin >> n >> h;

	int count(0);

	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		if (a <= h) {
			count += 1;
		} if (a > h) {
			count += 2;
		}
	}

	cout << count << endl;

	return 0;
}
