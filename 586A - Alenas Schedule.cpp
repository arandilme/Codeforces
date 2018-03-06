/*
 * 586A - Alenas Schedule.cpp
 * http://codeforces.com/problemset/problem/586/A
 *  Created on: Mar 6, 2018
 *      Author: athena
 * 36028999 	586A - 29 	GNU C++14 	Accepted 	15 ms 	1852 KB 	2018-03-07 01:19:51 	2018-03-07 01:19:51
 */

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int a[103];
	int count(0);

	for (int i = 0; i < n; i++) {
		cin >> a[i];
		count += a[i];
	}

	for (int i = 0; i < n; i++) {
		if (a[i-1] == 1 && a[i] == 0 && a[i+1] == 1) {
			count++;
		}
	}

	cout << count << endl;

	return 0;
}
