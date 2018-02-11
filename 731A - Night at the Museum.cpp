/*
 * 731A - Night at the Museum.cpp
 * http://codeforces.com/problemset/problem/731/A
 *  Created on: Feb 12, 2018
 *      Author: athena
 * 35164482 	731A - 20 	GNU C++14 	Accepted 	15 ms 	1856 KB 	2018-02-12 01:02:24 	2018-02-12 01:02:24
 */

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	char c, cur = 'a';
	int count(0);

	while (cin >> c) {
		count += min(abs(cur - c), 26 - abs(cur - c));
		cur = c;
	}

	cout << count << endl;

	return 0;
}
