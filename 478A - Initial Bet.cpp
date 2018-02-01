/*
 * 478A - Initial Bet.cpp
 * http://codeforces.com/problemset/problem/478/A
 *  Created on: Feb 2, 2018
 *      Author: athena
 * 34821321 	478A - 11 	GNU C++14 	Accepted 	15 ms 	1848 KB 	2018-02-02 01:27:53 	2018-02-02 01:27:53
 */

#include <iostream>
using namespace std;

int main() {
	int c, count(0);

	for (int i = 0; i < 5; i++) {
		cin >> c;
		count += c;
	}

	if (count % 5 == 0 && count != 0) {
		cout << count / 5 << endl;
	} else {
		cout << "-1" << endl;
	}

	return 0;
}
