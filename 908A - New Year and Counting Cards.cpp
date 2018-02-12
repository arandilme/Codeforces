/*
 * 908A - New Year and Counting Cards.cpp
 * http://codeforces.com/problemset/problem/908/A
 *  Created on: Feb 12, 2018
 *      Author: athena
 * 35178794 	908A - 31 	GNU C++14 	Accepted 	15 ms 	1856 KB 	2018-02-12 16:15:49 	2018-02-12 16:15:49
 */

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	string s;
	cin >> s;

	int count(0);

	for (int i = 0; i < s.length(); i++) {
		if (strchr("aeiou13579", s[i])) {
			count++;
		}
	}

	cout << count << endl;

	return 0;
}
