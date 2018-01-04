/*
 * 141A - Amusing Joke.cpp
 * http://codeforces.com/problemset/problem/141/A
 *  Created on: Jan 5, 2018
 *      Author: athena
 * 33912276 	141A - 32 	GNU C++14 	Accepted 	30 ms 	1852 KB 	2018-01-05 01:12:52 	2018-01-05 01:12:52
 */

#include <iostream>
#include <algorithm>
using namespace std;

int main () {
	string a, b, c;
	cin >> a >> b >> c;

	string s = a + b;

	sort(s.begin(), s.end());
	sort(c.begin(), c.end());

	if (s == c) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}

	return 0;
}
