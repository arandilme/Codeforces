/*
 * 621A - Wet Shark and Odd and Even.cpp
 * http://codeforces.com/problemset/problem/621/A
 *  Created on: Feb 21, 2018
 *      Author: athena
 * 35533130	621A - 33	GNU C++14	Accepted	202 ms	1852 KB	2018-02-20 23:50:07	2018-02-20 23:50:07
 */

#include <iostream>
using namespace std;

int main() {
	long long int n;
	cin >> n;

	long long int sum(0), max(10000000001);

	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		sum += a;
		if (a % 2 == 1 && a < max) {
			max = a;
		}
	}

	if (sum % 2 == 0) {
		cout << sum << endl;
	} else {
		cout << sum - max << endl;
	}

	return 0;
}
