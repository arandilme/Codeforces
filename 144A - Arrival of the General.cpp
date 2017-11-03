/*
 * 144A - Arrival of the General.cpp
 * http://codeforces.com/problemset/problem/144/A
 *  Created on: Nov 3, 2017
 *      Author: athena
 * 32034625 	144A - 19 	GNU C++14 	Accepted 	30 ms 	4 KB 	2017-11-03 22:05:43 	2017-11-03 22:05:44
 */

#include <iostream>
using namespace std;

int main() {
	int n, a;
	cin >> n >> a;

	int aMax(a), aMin(a), iMax(0), iMin(0);

	for (int i = 1; i < n; i++) {
		cin >> a;
		if (a > aMax) {
			aMax = a;
			iMax = i;
		}
		if (a <= aMin) {
			aMin = a;
			iMin = i;
		}
	}

	int result;
	result = iMax + (n - 1 - iMin) - (iMin < iMax ? 1 : 0);

	cout << result << endl;


	return 0;
}
