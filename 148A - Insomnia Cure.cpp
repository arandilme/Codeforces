/*
 * 148A - Insomnia Cure.cpp
 * http://codeforces.com/problemset/problem/148/A
 *  Created on: Nov 2, 2017
 *      Author: athena
 * 31991337 	148A - 10 	GNU C++14 	Accepted 	62 ms 	4 KB 	2017-11-02 22:47:24 	2017-11-02 22:47:24
 */

#include <iostream>
using namespace std;

int main() {
	int k, l, m, n, d;
	cin >> k >> l >> m >> n >> d;

	int counter = 0;

	for (int i = 1; i <= d; i++) {
		if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) {
			counter++;
		}
	}

	cout << counter << endl;

	return 0;
}
