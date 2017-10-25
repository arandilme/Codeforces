/*
 * football.cpp
 *
 *  Created on: Oct 23, 2017
 *      Author: athena
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cin >> str;

	int count = 0;

	for (int i = 0; i < str.size(); i++) {
		if (str[i] == str[i-1]) {
			count++;
			if (count == 6) {
				cout << "YES" << endl;
				return 0;
			}
		}
		else {
			count = 0;
		}
	}

	cout << "NO" << endl;

	return 0;
}
