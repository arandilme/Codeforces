/*
 * 334A - Candy Bags.cpp
 * http://codeforces.com/problemset/problem/334/A
 *  Created on: Mar 8, 2018
 *      Author: athena
 * 36082735 	334A - 12 	GNU C++14 	Accepted 	30 ms 	1856 KB 	2018-03-09 00:55:25 	2018-03-09 00:55:25
 */

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 1; i <= n*n/2; i++) {
		cout << i << " " << n*n-i+1 << endl;
	}

	return 0;
}
