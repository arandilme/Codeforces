/*
 * petyaandstrings.cpp
 *
 *  Created on: Oct 24, 2017
 *      Author: athena
 */

#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {
	string str1, str2;
	cin >> str1 >> str2;

	transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
	transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

	strcmp(str1.c_str(), str2.c_str());

	if (str1 < str2) {
		cout << "-1" << endl;
	} else if (str1 > str2) {
		cout << "1" << endl;
	} else {
		cout << "0" << endl;
	}

	return 0;
}
