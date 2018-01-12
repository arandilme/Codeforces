/*
 * 466A - Cheap Travel.cpp
 * http://codeforces.com/problemset/problem/466/A
 *  Created on: Jan 13, 2018
 *      Author: athena
 * 34116046 	466A - 25 	GNU C++14 	Accepted 	15 ms 	1860 KB 	2018-01-13 02:32:02 	2018-01-13 02:32:02
 */

#include <iostream>
using namespace std;

int main() {
	int n, m, a, b;
	cin >> n >> m >> a >> b;

	int cost(0);

	if (m * a <= b) {
		cost = n * a;
	} else {
		cost = (n /m ) * b + min((n % m) * a, b);
	}

	cout << cost << endl;

	return 0;
}
