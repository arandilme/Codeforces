/*
 * 746A - Compote.cpp
 * http://codeforces.com/problemset/problem/746/A
 *  Created on: Feb 24, 2018
 *      Author: athena
 * 35659711 	746A - 43 	GNU C++14 	Accepted 	15 ms 	1856 KB 	2018-02-24 23:00:53 	2018-02-24 23:03:01
 */

#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	int set = min(a, min(b / 2, c / 4));

	cout << set * 7 << endl;

	return 0;
}
