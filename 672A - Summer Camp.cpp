/*
 * 672A - Summer Camp.cpp
 * http://codeforces.com/problemset/problem/672/A
 *  Created on: Mar 2, 2018
 *      Author: athena
 * 35856335 	672A - 19 	GNU C++14 	Accepted 	15 ms 	1856 KB 	2018-03-02 23:18:33 	2018-03-02 23:18:34
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	for (int i = 1; i <= 1000; i++) {
		s += to_string(i);
	}

	int n;
	cin >> n;

	cout << s[n - 1] << endl;

	return 0;
}
