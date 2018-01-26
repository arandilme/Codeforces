/*
 * 732A - Buy a Shovel.cpp
 * http://codeforces.com/problemset/problem/732/A
 *  Created on: Jan 27, 2018
 *      Author: athena
 * 34587800 	732A - 43 	GNU C++14 	Accepted 	15 ms 	1856 KB 	2018-01-26 23:35:11 	2018-01-26 23:35:11
 */

#include <iostream>
using namespace std;

int main() {
	int k, r;
	cin >> k >> r;

	int x(1);

	while (k * x % 10 != 0 && k * x % 10 != r) {
			x++;
		}

	cout << x << endl;

	return 0;
}
