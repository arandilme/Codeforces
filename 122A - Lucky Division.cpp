/*
 * 122A - Lucky Division.cpp
 * http://codeforces.com/problemset/problem/122/A
 *  Created on: Oct 27, 2017
 *      Author: athena
 * 31816171 	122A - 9 	GNU C++14 	Accepted 	30 ms 	8 KB 	2017-10-27 21:35:34 	2017-10-27 21:35:34
 */

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	if ((n % 4 == 0) || (n % 7 == 0) || (n & 14 == 0) || (n % 17 == 0) || (n % 47 == 0) || (n % 74 == 0) ||
			(n % 444 == 0) || (n % 447 == 0) || (n % 474 == 0) || (n % 477 == 0) ||
			(n % 744 == 0) || (n % 747 == 0) || (n & 774 == 0) || (n % 777 == 0)) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}

	return 0;
}
