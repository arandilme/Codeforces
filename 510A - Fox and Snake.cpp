/*
 * 510A - Fox and Snake.cpp
 * http://codeforces.com/problemset/problem/510/A
 *  Created on: Jan 2, 2018
 *      Author: athena
 * 33856002 	510A - 15 	GNU C++14 	Accepted 	15 ms 	1856 KB 	2018-01-02 02:46:35 	2018-01-02 02:46:35
 */

#include <iostream>
using namespace std;

int main () {
	int n, m;
	cin >> n >> m;

	bool right(true);

	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			for (int j = 0; j < m; j++)
				cout << "#";
		}
		else {
			if (right) {
				for (int j = 1; j < m; j++)
					cout << ".";
					right = !right;
					cout << "#";
			}
			else {
				cout << "#";
				for (int j = 1; j < m; j++)
					cout << ".";
					right = !right;
			}
		}
		cout << endl;
	}

	return 0;
}
