/*
 * team.cpp
 *
 *  Created on: Oct 23, 2017
 *      Author: athena
 */

#include <iostream>
using namespace std;

int main() {
	int n, p, v, t;
	cin >> n;

	int count = 0;

	for (int i = 0; i < n; i++) {
		cin >> p >> v >> t;
		if (p + v + t > 1) {
			count++;
		}
	}

	cout << count << endl;

	return 0;
}
