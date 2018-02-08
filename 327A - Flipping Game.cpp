/*
 * 327A - Flipping Game.cpp
 * http://codeforces.com/problemset/problem/327/A
 *  Created on: Feb 9, 2018
 *      Author: athena
 * 35074030 	327A - 16 	GNU C++14 	Accepted 	30 ms 	1856 KB 	2018-02-09 02:11:43 	2018-02-09 02:11:43
 */

#include <iostream>
using namespace std;

int count(0), x(0), r(-1), m;

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		count += a;
		x += 1 - a * 2;
		r = max(r, x - m);
		m = min(m, x);
	}

	cout << r + count << endl;

	return 0;
}
