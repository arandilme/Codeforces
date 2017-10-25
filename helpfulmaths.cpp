/*
 * helpfulmaths.cpp
 *
 *  Created on: Oct 25, 2017
 *      Author: athena
 *
 *  http://codeforces.com/contest/339/submission/31693931
 */

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> parseString(string str) {
	stringstream ss(str);
	int integer;
	char plus;
	vector<int> temp;

	while (!ss.eof()) {
		ss >> integer >> plus;
		temp.push_back(integer);
	}

	return temp;
}

int main() {
	string s;
	cin >> s;

	vector<int> summands = parseString(s);

	sort(summands.begin(), summands.end());

	int i;

	for (i = 0; i < summands.size() - 1; i++) {
		cout << summands[i] << "+";
	}
		cout << summands[i] << endl;


	return 0;
}
