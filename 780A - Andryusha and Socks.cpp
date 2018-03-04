/*
 * 780A - Andryusha and Socks.cpp
 * http://codeforces.com/problemset/problem/780/A
 *  Created on: Mar 4, 2018
 *      Author: athena
 * 35951328 	780A - 20 	GNU C++14 	Accepted 	265 ms 	3796 KB 	2018-03-05 00:27:54 	2018-03-05 00:27:54
 */

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int count[500000] = {0};
	int temp(0);
	int ans(-1);

	for (int i = 0; i < 2*n; i++) {
		int x;
		cin >> x;

		if (count[x] == 1) {
			temp--;
		} else {
			count[x] = 1;
			temp++;
		}

		ans = max(temp, ans);
	}

	cout << ans << endl;

	return 0;
}
