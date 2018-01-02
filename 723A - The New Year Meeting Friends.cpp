/*
 * 723A - The New Year Meeting Friends.cpp
 * http://codeforces.com/problemset/problem/723/A
 *  Created on: Jan 3, 2018
 *      Author: athena
 * 33874161 	723A - 23 	GNU C++14 	Accepted 	15 ms 	1852 KB 	2018-01-03 00:55:15 	2018-01-03 00:55:15
 */

#include <iostream>
#include <algorithm>
using namespace std;

int main () {
	int a, b, c;
	cin >> a >> b >> c;

	int distance;

	distance = max(max(a, b), c) - min(min(a, b), c);

	cout << distance << endl;

	return 0;
}
