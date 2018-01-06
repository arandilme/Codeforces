/*
 * 149A - Business Trip.cpp
 * http://codeforces.com/problemset/problem/149/A
 *  Created on: Jan 7, 2018
 *      Author: athena
 * 33972470 	149A - 28 	GNU C++14 	Accepted 	30 ms 	1856 KB 	2018-01-06 23:46:43 	2018-01-06 23:46:43
 */

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int k, month[12], total(0);
	cin >> k;

	for (int i = 0; i < 12; i++) {
		cin >> month[i];
		total += month[i];
	}

	if (total < k) {
		cout << -1 << endl;
	} else {
		sort(month, month + sizeof(month) / sizeof(month[0]), greater<int>());
		int sum(0);
		int count(0);

		while (sum < k) {
			sum += month[count];
			count += 1;
		}

		cout << count << endl;
	}

	return 0;
}
