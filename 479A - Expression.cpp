/*
 * 479A - Expression.cpp
 * http://codeforces.com/problemset/problem/479/A
 *  Created on: Oct 30, 2017
 *      Author: athena
 * 31897959 	479A - 26 	GNU C++14 	Accepted 	15 ms 	8 KB 	2017-10-30 18:23:48 	2017-10-30 18:23:48
 */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	int result = a + b + c;
	result = max(result, (a + b) * c);
	result = max(result, a * (b + c));
	result = max(result, a * b * c);

	cout << result << endl;

	return 0;
}
