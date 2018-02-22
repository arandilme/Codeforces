/*
 * 615A - Bulbs.cpp
 * http://codeforces.com/problemset/problem/615/A
 *  Created on: Feb 23, 2018
 *      Author: athena
 * 35585064 	615A - 35 	GNU C++14 	Accepted 	31 ms 	1996 KB 	2018-02-23 01:53:59 	2018-02-23 01:53:59
 */

#include <iostream>
#include <set>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	int x, y;
	set<int> queue;

	while (n--) {
		cin >> x;
		while (x--) {
			cin >> y;
			queue.insert(y);
		}
	}

	if (queue.size() == m) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}

	return 0;
}
