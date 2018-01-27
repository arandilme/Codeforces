/*
 * 540A - Combination Lock.cpp
 * http://codeforces.com/problemset/problem/540/A
 *  Created on: Jan 28, 2018
 *      Author: athena
 * 34617347	540A - 16	GNU C++14	Accepted	15 ms	1860 KB	2018-01-27 23:34:13	2018-01-27 23:34:13
 */

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int n;
	string a, b;

	cin >> n >> a >> b;

	int count(0);

	for (int i = 0; i < n; i++) {
		count += min(abs(a[i]-b[i]),10-abs(a[i]-b[i]));
	}

	cout << count << endl;

	return 0;
}
