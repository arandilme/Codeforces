/*
 * 476A - Dreamoon and Stairs.cpp
 * http://codeforces.com/problemset/problem/476/A
 *  Created on: Jan 24, 2018
 *      Author: athena
 * 34527480 	476A - 28 	GNU C++14 	Accepted 	15 ms 	1852 KB 	2018-01-24 22:36:37 	2018-01-24 22:36:37
 */

#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	int min = (n + 1)/2;
	int result = (min + m - 1)/m * m;

	if (result > n) {
		result = -1;
	}

	cout << result << endl;

	return 0;
}
