/*
 * HQ9+.cpp
 * http://codeforces.com/problemset/problem/133/A
 *  Created on: Oct 26, 2017
 *      Author: athena
 * 31769774 	133A - 34 	GNU C++14 	Accepted 	60 ms 	8 KB 	2017-10-26 21:42:28 	2017-10-26 21:42:28
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
	string p;
	cin >> p;

	for (int i = 0; i < p.size(); i++) {
		if (p[i] == 'H' || p[i] == 'Q' || p[i] == '9') {
			cout << "YES" << endl;
			return 0;
		}
	}

	cout << "NO" << endl;

	return 0;
}



