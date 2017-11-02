/*
 * 580A - Kefa and First Steps.cpp
 * http://codeforces.com/problemset/problem/580/A
 *  Created on: Nov 3, 2017
 *      Author: athena
 * 31992431 	580A - 19 	GNU C++14 	Accepted 	233 ms 	392 KB 	2017-11-02 23:40:10 	2017-11-02 23:40:10
 */

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int i;
	int a[n];

	int counter(1), maxCounter(1);

	for (i = 0; i < n; i++) {
		cin >> a[i];
		if (i > 0) {
			if (a[i] >= a[i-1]) {
				counter++;
				maxCounter = max(counter, maxCounter);
			} else {
				counter = 1;
			}
		}
	}


	cout << maxCounter << endl;

	return 0;
}
