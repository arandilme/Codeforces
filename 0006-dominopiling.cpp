/*
 * dominopiling.cpp
 *  Created on: Oct 22, 2017
 *      Author: athena
 * http://codeforces.com/problemset/problem/50/A
 * 31609971 	GNU C++14 	Accepted 	30 ms 	1880 KB 	2017-10-22 20:11:39 	2017-10-22 20:11:39
 */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int m, n;
	cin >> m >> n;

	int domino = (floor(m * n * 0.5));

	cout << domino;

	return 0;
}
