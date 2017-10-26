/*
 * 131A - cAPS lOCK.cpp
 * http://codeforces.com/problemset/problem/131/A
 *  Created on: Oct 26, 2017
 *      Author: athena
 * 31768925 	131A - 19 	GNU C++14 	Accepted 	15 ms 	4 KB 	2017-10-26 21:16:25 	2017-10-26 21:16:25
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;

	int counter = 0;

	for (int i = 0; i < s.size(); i++) {
		if (isupper(s[i])) {
			counter++;
		}
	}

	if (counter == s.size() || (counter == (s.size() - 1) && islower(s[0]))) {
		for (int j = 0; j < s.size(); j++) {
			s[j] = tolower(s[j]);
		}
		if (counter == (s.size() - 1)) {
			s[0] = toupper(s[0]);
		}
	}

	cout << s;

	return 0;
}
