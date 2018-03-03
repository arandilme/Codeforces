/*
 * 757A - Gotta Catch Em All.cpp
 * http://codeforces.com/problemset/problem/757/A
 *  Created on: Mar 3, 2018
 *      Author: athena
 * 35903103 	757A - 65 	GNU C++14 	Accepted 	30 ms 	2232 KB 	2018-03-04 01:42:21 	2018-03-04 01:42:21
 */

#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main() {
	string s;
	cin >> s;

	map<char, int> count;

	for (int i = 0; i < s.size(); i++) {
		count[s[i]]++;
	}

	int result = min(count['B'], min(count['u']/2, min(count['l'], min(count['b'], min(count['a']/2, min(count['s'], count['r']))))));

	cout << result << endl;

	return 0;
}
