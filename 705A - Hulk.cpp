/*
 * 705A - Hulk.cpp
 * http://codeforces.com/problemset/problem/705/A
 *  Created on: Jan 17, 2018
 *      Author: athena
 * 34235061 	705A - 8 	GNU C++14 	Accepted 	15 ms 	1856 KB 	2018-01-17 01:35:06 	2018-01-17 01:35:06
 */

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	cout << "I hate ";

	for (int i = 2; i <= n; i++) {
		if (i % 2 == 0) {
			cout << "that I love ";
		} else {
			cout << "that I hate ";
		}
	}

	cout << "it" << endl;


	return 0;
}
