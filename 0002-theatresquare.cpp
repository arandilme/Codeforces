/*
 * theatresquare.cpp
 *  Created on: Oct 21, 2017
 *      Author: athena
 * http://codeforces.com/problemset/problem/1/A
 * 31581183 	GNU C++14 	Accepted 	15 ms 	1876 KB 	2017-10-21 19:45:54 	2017-10-21 19:45:54 	
 */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double n, m, a;
	cin >> n >> m >> a;

	long long result = ceil(n/a) * ceil(m/a);

	cout << result;

	return 0;
}
