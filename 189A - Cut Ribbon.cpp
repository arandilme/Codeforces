/*
 * 189A - Cut Ribbon.cpp
 * http://codeforces.com/problemset/problem/189/A
 *  Created on: Feb 3, 2018
 *      Author: athena
 * 34876898 	189A - 39 	GNU C++14 	Accepted 	31 ms 	1852 KB 	2018-02-03 00:43:14 	2018-02-03 00:43:14
 */

#include <iostream>
using namespace std;

int main() {
	int n, a, b, c;
	cin >> n >> a >> b >> c;

	int k(0), ans(0);

	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= n; j++) {
			k = n - a*i - b*j;

			if (k >= 0 && k%c == 0) {
				ans = max(ans, (i + j + k/c));
			}
		}
	}

	cout << ans << endl;

	return 0;
}
