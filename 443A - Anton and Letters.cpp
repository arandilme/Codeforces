/*
 * 734A - Anton and Danik.cpp
 * http://codeforces.com/problemset/problem/443/A
 *  Created on: Nov 7, 2017
 *      Author: athena
 * 32129753 	443A - 14 	GNU C++14 	Accepted 	15 ms 	148 KB 	2017-11-07 23:00:58 	2017-11-07 23:00:58
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
