/*
 * 155A - I_love_username.cpp
 * http://codeforces.com/problemset/problem/155/A
 *  Created on: Jan 30, 2018
 *      Author: athena
 * 34693467 	155A - 36 	GNU C++14 	Accepted 	30 ms 	1852 KB 	2018-01-30 03:42:42 	2018-01-30 03:42:42
 */

#include <iostream>
using namespace std;

int main() {
	int n, a;
	cin >> n >> a;

	int min(a), max(a), count(0);

	for (int i = 1; i < n; i++) {
		cin >> a;
		if (a < min) {
			min = a;
			count++;
		} else if (a > max) {
			max = a;
			count++;
		}
	}

	cout << count << endl;

	return 0;
}
