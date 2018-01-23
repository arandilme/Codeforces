/*
 * 711A - Bus to Udayland.cpp
 * http://codeforces.com/problemset/problem/711/A
 *  Created on: Jan 23, 2018
 *      Author: athena
 * 23468667 	711A - 26 	GNU C++14 	Accepted 	15 ms 	1892 KB 	2016-12-31 14:50:24 	2016-12-31 14:50:25
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;

	string str, s;

	while (n--) {
		cin >> s;
		str += s+ "\n";
	}

	int pos = str.find("OO");

	if (pos >= 0) {
		str.replace(pos, 2, "++");
		cout << "YES\n" << str << endl;
		} else {
			cout << "NO" << endl;
		}
}
