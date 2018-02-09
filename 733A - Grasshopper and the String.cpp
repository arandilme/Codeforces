/*
 * 733A - Grasshopper and the String.cpp
 * http://codeforces.com/problemset/problem/733/A
 *  Created on: Feb 10, 2018
 *      Author: athena
 * 35107302 	733A - 57 	GNU C++14 	Accepted 	15 ms 	1856 KB 	2018-02-10 01:47:46 	2018-02-10 01:47:46
 */

#include <iostream>
using namespace std;

int main() {
	string s;
	cin >> s;

	int cur(1), len(0);

	for (int i = 0; i < s.size(); i++) {
		if (s[i] != 'A' && s[i] != 'E' && s[i] != 'I' && s[i] != 'O'&& s[i] != 'U' && s[i] != 'Y') {
			cur++;
		} else {
			len = max(len, cur);
			cur = 1;
		}
	}

	len = max(len, cur);

	cout << len << endl;

	return 0;
}
