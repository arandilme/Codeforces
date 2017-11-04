/*
 * 318A - Even Odds.cpp
 * http://codeforces.com/problemset/problem/318/A
 *  Created on: Nov 4, 2017
 *      Author: athena
 * 32055584 	318A - 17 	GNU C++14 	Accepted 	30 ms 	124 KB 	2017-11-04 17:10:43 	2017-11-04 17:10:43
 */

#include <iostream>
using namespace std;

int main() {
	long long int n, k;
	cin >> n >> k;

	if (k <= (n + 1) / 2) {
		cout << k * 2 - 1 << endl;
	} else {
		cout << (k - (n + 1) / 2) * 2 << endl;
	}

	return 0;
}

/* Here's my first solution - it's longer and fails Test 8 (memory limit exceeded).
 * Got extra practice with vectors and learned v.insert(), though :)
 *
 * int main() {
	long long int n, k;
	cin >> n >> k;

	vector<long long int> numbers;
	vector<long long int> evenNumbers;

	for (long long int i = 1; i <= n; i++) {
		if (i % 2 != 0) {
			numbers.push_back(i);
		} else {
			evenNumbers.push_back(i);
		}
	}

	numbers.insert(numbers.end(), evenNumbers.begin(), evenNumbers.end());

	cout << numbers[k-1] << endl;

	return 0;
}
 */
