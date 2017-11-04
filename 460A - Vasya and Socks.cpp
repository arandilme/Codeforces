/*
 * 460A - Vasya and Socks.cpp
 * http://codeforces.com/problemset/problem/460/A
 *  Created on: Nov 4, 2017
 *      Author: athena
 * 32058258 	460A - 16 	GNU C++14 	Accepted 	15 ms 	4 KB 	2017-11-04 19:22:31 	2017-11-04 19:22:31
 */

#include <iostream>
using namespace std;

int main() {
	int n, m, i;
	cin >> n >> m;

	for (i = 1; n > 0; i++, n--) {
		if (i % m == 0) {
			n++;
		}
	}

	cout << i - 1 << endl;

	return 0;
}
