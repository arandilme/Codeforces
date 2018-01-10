/*
 * 599A - Patrick and Shopping.cpp
 * http://codeforces.com/problemset/problem/599/A
 *  Created on: Jan 11, 2018
 *      Author: athena
 * 34078471 	599A - 29 	GNU C++14 	Accepted 	15 ms 	1860 KB 	2018-01-11 02:02:00 	2018-01-11 02:02:00
 */

#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	int result = min (a + a + b + b, min(a + b + c, min (a + a + c + c, b + b + c + c)));

	cout << result << endl;
	return 0;
}
