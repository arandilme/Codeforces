/*
 * 486A - Calculating Function.cpp
 * http://codeforces.com/problemset/problem/486/A
 *  Created on: Nov 3, 2017
 *      Author: athena
 * 32031957 	486A - 24 	GNU C++14 	Accepted 	15 ms 	8 KB 	2017-11-03 21:06:51 	2017-11-03 21:06:52
 */

#include <iostream>
using namespace std;

int main() {
	long long int n;
	cin >> n;

	long long int result;

	if (n % 2 == 0) {
		result = n / 2;
	} else {
		result = -(n + 1)/2;
	}

	cout << result << endl;

	return 0;
}
