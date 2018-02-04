/*
 * 492B - Vanya and Lanterns.cpp
 * http://codeforces.com/problemset/problem/492/B
 *  Created on: Feb 4, 2018
 *      Author: athena
 * 34928338 	492B - 15 	GNU C++14 	Accepted 	15 ms 	1860 KB 	2018-02-04 20:59:06 	2018-02-04 20:59:06
 */

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, l;
	cin >> n >> l;

	int arr[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr, arr+n);

	int maxdist = max(arr[0], l - arr[n-1])*2;

	for (int i = 1; i < n; i++) {
		maxdist = max(maxdist, arr[i] - arr[i-1]);
	}

	cout.precision(20);
	cout << fixed << maxdist/2.0 << endl;

	return 0;
}

