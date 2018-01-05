/*
 * 709A - Bear and Big Brother.cpp
 * http://codeforces.com/problemset/problem/791/A
 *  Created on: Jan 6, 2018
 *      Author: athena
 * 33952001 	791A - 11 	GNU C++14 	Accepted 	15 ms 	1856 KB 	2018-01-06 01:02:05 	2018-01-06 01:02:05
 */

#include <iostream>
using namespace std;

int main () {
	int a, b;
	cin >> a >> b;

	int count(0);

	while (a <= b) {
		a *= 3;
		b *= 2;
		count++;
	}

	cout << count;

	return 0;
}
