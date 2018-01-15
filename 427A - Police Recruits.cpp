/*
 * 427A - Police Recruits.cpp
 * http://codeforces.com/problemset/problem/427/A
 *  Created on: Jan 16, 2018
 *      Author: athena
 * 34207770 	427A - 21 	GNU C++14 	Accepted 	93 ms 	1856 KB 	2018-01-15 23:40:22
 */

#include <iostream>
using namespace std;

int main() {
	int n, a;
	cin >> n;

	int sum(0), count(0);

	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a > 0) {
			sum += a;
		} else if (a < 0 && sum > 0) {
			sum -= 1;
		} else if (a < 0 && sum <= 0) {
			count++;
		}
	}

	cout << count << endl;

	return 0;
}
