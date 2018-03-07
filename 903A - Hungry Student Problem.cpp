/*
 * 903A - Hungry Student Problem.cpp
 * http://codeforces.com/problemset/problem/903/A
 *  Created on: Mar 7, 2018
 *      Author: athena
 * 36057615 	903A - 17 	GNU C++14 	Accepted 	15 ms 	1848 KB 	2018-03-08 01:31:58 	2018-03-08 01:31:58
 */

#include <iostream>
using namespace std;

int main() {
	int n;
	cin  >> n;

	while (n--) {
		int x;
		cin >> x;

		if (x == 1 || x == 2 || x == 4 || x == 5 || x == 8 || x == 11) {
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl;
		}
	}

	return 0;
}
