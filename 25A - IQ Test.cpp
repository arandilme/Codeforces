/*
 * 25A - IQ Test.cpp
 * http://codeforces.com/problemset/problem/25/A
 *  Created on: Oct 30, 2017
 *      Author: athena
 * 31898731 	25A - 7 	GNU C++14 	Accepted 	30 ms 	4 KB 	2017-10-30 18:52:10 	2017-10-30 18:52:10
 */

#include <iostream>
using namespace std;

int main() {
	int n, x;
	cin >> n;

	int countEven(0);
	int even(0), odd(0);

	for (int i = 1; i <= n; i++) {
		cin >> x;
		if (x % 2 == 0) {
			countEven++;
			even = i;

		} else {
			countEven--;
			odd = i;
		}
	}

	cout << (countEven > 0 ? odd : even) << endl;

	return 0;
}
