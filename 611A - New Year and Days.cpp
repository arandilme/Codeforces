/*
 * 611A - New Year and Days.cpp
 * http://codeforces.com/problemset/problem/611/A
 *  Created on: Feb 24, 2018
 *      Author: athena
 * 35610108 	611A - 20 	GNU C++14 	Accepted 	31 ms 	1856 KB 	2018-02-24 00:33:10 	2018-02-24 00:33:10
 */

#include <iostream>
using namespace std;

int main() {
	int n;
	string str1, str2;

	cin >> n >> str1 >> str2;

	if (str2 == "week") {
		if (n == 6 || n == 5) {
			cout << "53" << endl;
		} else {
			cout << "52" << endl;
		}
	} else {
		if (n < 30) {
			cout << "12" << endl;
		} else if (n == 30) {
			cout << "11" << endl;
		} else {
			cout << "7" << endl;
		}
	}

	return 0;
}
