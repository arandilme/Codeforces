/*
 * 41A - Translation.cpp
 * http://codeforces.com/problemset/problem/41/A
 *  Created on: Oct 29, 2017
 *      Author: athena
 * 31874302 	41A - 9 	GNU C++14 	Accepted 	30 ms 	8 KB 	2017-10-29 21:13:08 	2017-10-29 21:13:08
 */

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string s, t;
	cin >> s >> t;

	reverse(s.begin(), s.end());

	if (s == t) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}

	return 0;
}



