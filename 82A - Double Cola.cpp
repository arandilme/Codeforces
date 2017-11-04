/*
 * 82A - Double Cola.cpp
 * http://codeforces.com/problemset/problem/82/A
 *  Created on: Nov 4, 2017
 *      Author: athena
 * 32058517 	82A - 12 	GNU C++14 	Accepted 	15 ms 	4 KB 	2017-11-04 19:36:43 	2017-11-04 19:36:43
 */

#include <iostream>
using namespace std;

int main() {
	long long int n;
	cin >> n;

	int result = 1;

	while (result * 5 < n) {
		n -= result * 5;
		result *= 2;
	}

	string names[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};

	cout << names[(n - 1) / result] << endl;

	return 0;
}
