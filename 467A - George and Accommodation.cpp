/*
 * 467A - George and Accommodation.cpp
 * http://codeforces.com/problemset/problem/467/A
 *  Created on: Oct 28, 2017
 *      Author: athena
 * 31848628 	467A - 17 	GNU C++14 	Accepted 	15 ms 	4 KB 	2017-10-28 22:03:34 	2017-10-28 22:03:34
 */

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int p, q;
	int counter = 0;

	for (int i = 1; i <= n; i++) {
		cin >> p >> q;
		if (q - p >= 2) {
			counter++;
		}
	}

	cout << counter << endl;

	return 0;
}




