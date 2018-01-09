/*
 * 339B - Xenia and Ringroad.cpp
 * http://codeforces.com/problemset/problem/339/B
 *  Created on: Jan 10, 2018
 *      Author: athena
 * 34058656 	339B - 15 	GNU C++14 	Accepted 	280 ms 	1860 KB 	2018-01-10 00:43:31 	2018-01-10 00:43:31
 */

#include <iostream>
using namespace std;

int main() {
	long long int n, m, a0, a;
	cin >> n >> m >> a0;

    long long int count(0);

	while (--m) {
		cin >> a;

		if (a0 > a) {
			count += 1;
		}

		a0 = a;
	}

	long long int result = (n * count + a0 - 1);

	cout << result << endl;

	return 0;
}
