/*
 * 579A - Raising Bacteria.cpp
 * http://codeforces.com/problemset/problem/579/A
 *  Created on: Jan 21, 2018
 *      Author: athena
 * 34392675 	579A - 18 	GNU C++14 	Accepted 	15 ms 	1856 KB 	2018-01-21 00:13:49 	2018-01-21 00:13:51
 */

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	cout << __builtin_popcount(n);

	return 0;
}
