/*
 * 581A - Vasya the Hipster.cpp
 * http://codeforces.com/problemset/problem/581/A
 *  Created on: Feb 5, 2018
 *      Author: athena
 * 34948278 	581A - 18 	GNU C++14 	Accepted 	15 ms 	1856 KB 	2018-02-05 18:33:41 	2018-02-05 18:33:41
 */

#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	int diffSocksDays = min(a, b);

	int sameSocksDays = max((a - min(a, b))/2, (b - min(a, b))/2);

	cout << diffSocksDays << " " << sameSocksDays << endl;

	return 0;
}
