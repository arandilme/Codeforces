/*
 * 313A - Ilya and Bank Account.cpp
 * http://codeforces.com/problemset/problem/313/A
 *  Created on: Jan 31, 2018
 *      Author: athena
 * 34721881 	313A - 31 	GNU C++14 	Accepted 	30 ms 	1852 KB 	2018-01-31 00:51:12 	2018-01-31 00:51:12
 */

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int max(n);

	if (n/10 > max) {
		max = n/10;
	}

	if (n%10 + (n/100)*10 > max) {
		max = n%10 + (n/100)*10;
	}

	cout << max << endl;

	return 0;
}
