/*
 * 61A - Ultra-Fast Mathematician.cpp
 * http://codeforces.com/problemset/problem/61/A
 *  Created on: Nov 4, 2017
 *      Author: athena
 * 32057171 	61A - 19 	GNU C++14 	Accepted 	30 ms 	128 KB 	2017-11-04 18:24:15 	2017-11-04 18:24:15
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
	string n, m;
	cin >> n >> m;

	for (int i = 0; i < n.size(); i++) {
		if (n[i] == m[i]) {
			n[i] = '0';
		} else {
			n[i] = '1';
		}
	}

	cout << n << endl;

	return 0;
}
