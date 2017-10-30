/*
 * 734A - Anton and Danik.cpp
 * http://codeforces.com/problemset/problem/734/A
 *  Created on: Oct 30, 2017
 *      Author: athena
 * 31899502 	734A - 8 	GNU C++14 	Accepted 	30 ms 	264 KB 	2017-10-30 19:22:44 	2017-10-30 19:22:44
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;

	string s;
	cin >> s;

	int A(0), D(0);

	for (int i = 0; i < n; i++) {
		if (s[i] == 'A') {
			A++;
		} else if (s[i] == 'D') {
			D++;
		}
	}

	if (A > D) {
		cout << "Anton" << endl;
	} else if (D > A) {
		cout << "Danik" << endl;
	} else {
		cout << "Friendship" << endl;
	}

	return 0;
}
