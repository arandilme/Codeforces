/*
 * 379A - New Year Candles.cpp
 * http://codeforces.com/problemset/problem/379/A
 *  Created on: Nov 5, 2017
 *      Author: athena
 * 32082679 	379A - 21 	GNU C++14 	Accepted 	15 ms 	4 KB 	2017-11-05 22:41:36 	2017-11-05 22:41:36
 */

#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	int counter = a;

	while (a >= b) {
		counter += a / b;
		a = a / b + a % b;
	}

	cout << counter << endl;

	return 0;
}
