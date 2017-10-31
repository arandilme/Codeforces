/*
 * 758A - Holiday Of Equality.cpp
 * http://codeforces.com/problemset/problem/758/A
 *  Created on: Nov 1, 2017
 *      Author: athena
 * 31933495 	758A - 21 	GNU C++14 	Accepted 	15 ms 	12 KB 	2017-10-31 23:43:34 	2017-10-31 23:43:34
 */

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int a[n];
	int max = 0;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] > max) {
			max = a[i];
		}
	}

	int sum = 0;

	for (int j = 0; j < n; j++) {
		sum += (max - a[j]);
	}

	cout << sum << endl;

	return 0;
}
