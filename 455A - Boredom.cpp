/*
 * 455A - Boredom.cpp
 * http://codeforces.com/problemset/problem/455/A
 *  Created on: Feb 3, 2018
 *      Author: athena
 * 34896968 	455A - 35 	GNU C++14 	Accepted 	156 ms 	2644 KB 	2018-02-03 17:41:59 	2018-02-03 17:41:59
*/

#include <iostream>
using namespace std;

long long arr[100000];

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		arr[x] += x;
	}

	for (int i = 2; i <= 100000; i++) {
		arr[i] = max(arr[i-1], arr[i] + arr[i-2]);
	}

	cout << arr[100000] << endl;

	return 0;
}
