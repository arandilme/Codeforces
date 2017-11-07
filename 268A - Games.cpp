/*
 * 268A - Games.cpp
 * http://codeforces.com/problemset/problem/268/A
 *  Created on: Nov 7, 2017
 *      Author: athena
 * 32129222 	268A - 21 	GNU C++14 	Accepted 	62 ms 	4 KB 	2017-11-07 22:30:24 	2017-11-07 22:30:24
 */

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	int counter(0);

	vector<int> h(n), a(n);

	for (int i = 0; i < n; i++) {
		cin >> h[i] >> a[i];

		for (int j = 0; j < i; j++) {
			if (h[i] == a[j]) {
				counter++;
			}
			if (a[i] == h[j]) {
				counter++;
			}
		}
	}

	cout << counter << endl;

	return 0;
}
