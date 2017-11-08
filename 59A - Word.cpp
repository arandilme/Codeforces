/*
 * 59A - Word.cpp
 * http://codeforces.com/problemset/problem/59/A
 *  Created on: Nov 8, 2017
 *      Author: athena
 * 32147166 	59A - 5 	GNU C++14 	Accepted 	30 ms 	4 KB 	2017-11-09 00:26:17 	2017-11-09 00:26:17
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;

	int counterLowercase(0);
	int counterUppercase(0);

	for (int i = 0; i < s.size(); i++) {
		if (islower(s[i])) {
			counterLowercase++;
		} else {
			counterUppercase++;
		}
	}

	for (int j = 0; j < s.size(); j++) {
		if (counterLowercase >= counterUppercase) {
			cout << (char)tolower(s[j]);
		} else {
			cout << (char)toupper(s[j]);
		}
	}

	cout << endl;

	return 0;
}
