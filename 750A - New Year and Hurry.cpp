/*
 * 750A - New Year and Hurry.cpp
 * http://codeforces.com/problemset/problem/750/A
 *  Created on: Jan 22, 2018
 *      Author: athena
 * 34458576 	750A - 24 	GNU C++14 	Accepted 	15 ms 	1848 KB 	2018-01-22 22:05:21 	2018-01-22 22:22:38
 */

#include <iostream>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	k = 240 - k;

	if (k >= 0) {
		while (5 * ((n * (n + 1)) / 2) > k) {
			n--;
		}
	}

	cout << n << endl;

	return 0;
}
