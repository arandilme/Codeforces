/*
 * 405A - Gravity Flip.cpp
 * http://codeforces.com/problemset/problem/405/A
 *  Created on: Jan 4, 2018
 *      Author: athena
 * 33894161 	405A - 19 	GNU C++14 	Accepted 	15 ms 	1852 KB 	2018-01-04 02:18:57 	2018-01-04 02:18:57
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
	int n;
	cin >> n;

	vector <int> numberOfCubes;

	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		numberOfCubes.push_back(a);
	}

	sort(numberOfCubes.begin(), numberOfCubes.end());

	for (int j = 0; j < n; j++) {
		cout << numberOfCubes[j] << " ";
	}

	return 0;
}
