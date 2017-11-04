/*
 * 472A - Design Tutorial.cpp
 * http://codeforces.com/problemset/problem/472/A
 *  Created on: Nov 4, 2017
 *      Author: athena
 * 32056818 	472A - 25 	GNU C++14 	Accepted 	15 ms 	128 KB 	2017-11-04 18:07:13 	2017-11-04 18:07:13
 */

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	if (n % 2 == 0) {
		cout << "8" << " " << n - 8 << endl;
	} else {
		cout << "9" << " " << n - 9 << endl;
	}

	return 0;
}
