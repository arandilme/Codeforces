/*
 * 707A - Brains Photos.cpp
 * http://codeforces.com/problemset/problem/707/A
 *  Created on: Jan 8, 2018
 *      Author: athena
 * 33990661 	707A - 45 	GNU C++14 	Accepted 	15 ms 	1852 KB 	2018-01-07 23:38:02 	2018-01-07 23:38:02
 */

#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	char c;
	bool colour(false);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> c;

			if (c == 'C' || c == 'M' || c == 'Y') {
				colour = true;
			}
		}
	}

	if (colour == true) {
		cout << "#Color" << endl;
	} else {
		cout << "#Black&White" << endl;
	}

	return 0;
}
