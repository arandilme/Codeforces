/*
 * 734A - Anton and Danik.cpp
 * http://codeforces.com/problemset/problem/443/A
 *  Created on: Nov 7, 2017
 *      Author: athena
 * 31899502 	734A - 8 	GNU C++14 	Accepted 	30 ms 	264 KB 	2017-10-30 19:22:44 	2017-10-30 19:22:44
 */

#include <iostream>
#include <set>
using namespace std;

int main() {
	string s;
	getline(cin, s);

	set <char> letters;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= 97 && s[i] <= 122) {
			letters.insert(s[i]);
		}
	}

	cout << letters.size() << endl;

	return 0;
}
