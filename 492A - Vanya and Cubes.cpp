/*
 * 492A - Vanya and Cubes.cpp
 * http://codeforces.com/problemset/problem/492/A
 *  Created on: Feb 1, 2018
 *      Author: athena
 * 34782610 	492A - 8 	GNU C++14 	Accepted 	15 ms 	1848 KB 	2018-02-01 01:18:44 	2018-02-01 01:18:44
 */

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int h(0), count(0);

	while (count <= n) {
		h++;
		count += (h * (h + 1)) / 2;
	}

	cout << h - 1;

	return 0;
}
