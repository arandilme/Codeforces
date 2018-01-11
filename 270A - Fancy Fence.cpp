/*
 * 270A - Fancy Fence.cpp
 * http://codeforces.com/problemset/problem/270/A
 *  Created on: Jan 12, 2018
 *      Author: athena
 * 34097724 	270A - 21 	GNU C++14 	Accepted 	0 ms 	1852 KB 	2018-01-12 02:26:58 	2018-01-12 02:26:58
 */

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int a;
		cin >> a;
		if (360 % (180 - a) == 0) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}

	return 0;
}
