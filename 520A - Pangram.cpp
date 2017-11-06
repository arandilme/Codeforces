/*
 * 520A - Pangram.cpp
 * http://codeforces.com/problemset/problem/520/A
 *  Created on: Nov 7, 2017
 *      Author: athena
 * 32106032 	520A - 24 	GNU C++14 	Accepted 	15 ms 	8 KB 	2017-11-07 00:29:41 	2017-11-07 00:29:41
 */

#include <iostream>
#include <string>
using namespace std;

bool isPangram (string s) {
	static int letters[27];

	for (int i = 0; i < s.size(); i++) {
		letters[tolower(s[i]) - 97]++;
	}

	for (int j = 0; j < 26; j++) {
		if (letters[j] == 0)  {
			return false;
			break;
		}
	}
	return true;
}

int main() {
	int n;
	cin >> n;

	string s;
	cin >> s;

	if (isPangram(s)) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}


	return 0;
}
