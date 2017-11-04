/*
 * 344A - Magnets.cpp
 * http://codeforces.com/problemset/problem/344/A
 *  Created on: Nov 4, 2017
 *      Author: athena
 * 32057988 	344A - 12 	GNU C++14 	Accepted 	186 ms 	4 KB 	2017-11-04 19:07:24 	2017-11-04 19:07:24
 */

#include <iostream>
using namespace std;

int main() {
	long int n;
	cin >> n;

	int previous(0), current(0), counter(0);

	while (n--) {
		cin >> current;
		if (current != previous) {
			counter++;
			previous = current;
		}
	}

	cout << counter << endl;

	return 0;
}
