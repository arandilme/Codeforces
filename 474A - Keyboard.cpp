/*
 * 474A - Keyboard.cpp
 * http://codeforces.com/problemset/problem/474/A
 *  Created on: Jan 19, 2018
 *      Author: athena
 * 34329390 	474A - 27 	GNU C++14 	Accepted 	15 ms 	1852 KB 	2018-01-19 22:52:58 	2018-01-19 22:52:58
 */

#include <iostream>
using namespace std;

int main() {
	string s = "qwertyuiopasdfghjkl;zxcvbnm,./";

	string a, b;
	cin >> a >> b;

	for (int i = 0; i < b.size(); i++) {
		cout << s[s.find(b[i]) - (a == "R") + (a == "L")];
	}

	return 0;
}
