/*
 * 432A - Choosing Teams.cpp
 * http://codeforces.com/problemset/problem/432/A
 *  Created on: Feb 6, 2018
 *      Author: athena
 * 34980515 	432A - 17 	GNU C++14 	Accepted 	15 ms 	1852 KB 	2018-02-06 22:03:51 	2018-02-06 22:03:51
 */

#include <iostream>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	int arr[n];
	int count(0);

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (5 - arr[i] >= k) {
			count++;
		}
	}

	cout << count / 3 << endl;

	return 0;
}
