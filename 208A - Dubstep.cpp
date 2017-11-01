/*
 * 208A - Dubstep.cpp
 * http://codeforces.com/problemset/problem/208/A
 *  Created on: Nov 2, 2017
 *      Author: athena
 * 31962837 	208A - 18 	GNU C++14 	Accepted 	30 ms 	8 KB 	2017-11-01 23:44:29 	2017-11-01 23:44:29
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
	string s, t;
	cin >> s;

	int i(0);
	bool a(false);

	while (1) {
		if (s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B') {
			i += 2;
			if (a == true) {
				t += " ";
				a = false;
			}
		}
		else {
			t += s[i];
			a = true;
		}
		i++;
		if (i == s.size()) {
			break;
		}
	}

	cout << t << endl;

	return 0;
}
