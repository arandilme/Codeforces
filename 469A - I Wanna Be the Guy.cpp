/*
 * 469A - I Wanna Be the Guy.cpp
 * http://codeforces.com/problemset/problem/469/A
 *  Created on: Nov 3, 2017
 *      Author: athena
 * 32036646 	469A - 24 	GNU C++14 	Accepted 	15 ms 	4 KB 	2017-11-03 23:37:13 	2017-11-03 23:37:13
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> levels;

	int p, a;
	cin >> p;

	for (int i = 0; i < p; i++) {
		cin >> a;
		levels.push_back(a);
	}

	int q, b;
	cin >> q;

	for (int j = 0; j < q; j++) {
		cin >> b;
		levels.push_back(b);
	}

	sort(levels.begin(), levels.end());
	levels.erase(unique(levels.begin(), levels.end()), levels.end());

	if (levels.size() == n) {
		cout << "I become the guy." << endl;
		} else {
			cout << "Oh, my keyboard!" << endl;
			}

	return 0;
}
