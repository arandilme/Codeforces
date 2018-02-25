/*
 * 151A - Soft Drinking.cpp
 * http://codeforces.com/problemset/problem/151/A
 *  Created on: Feb 26, 2018
 *      Author: athena
 * 35712692 	151A - 28 	GNU C++14 	Accepted 	30 ms 	1852 KB 	2018-02-25 23:46:17 	2018-02-25 23:46:17
 */

#include <iostream>
using namespace std;

int main() {
	int n, k, l, c, d, p, nl, np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;

	cout << min((k*l)/nl, min(c*d, p/np)) / n << endl;

	return 0;
}
