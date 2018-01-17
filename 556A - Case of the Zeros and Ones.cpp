/*
 * 556A - Case of the Zeros and Ones.cpp
 * http://codeforces.com/problemset/problem/556/A
 *  Created on: Jan 18, 2018
 *      Author: athena
 * 34263054 	556A - 26 	GNU C++14 	Accepted 	46 ms 	2356 KB 	2018-01-18 02:54:43 	2018-01-18 02:54:43
 */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	string s;

	cin >> n >> s;

	int count(0);

	for (int i = 0; i < n; i++) {
		if (s[i] == '0') {
			count++;
		} else {
			count--;
		}
	}

	cout << abs(count) << endl;

	return 0;
}
