/*
 * 228A - Is your horseshoe on the other hoof.cpp
 * http://codeforces.com/problemset/problem/228/A
 *  Created on: Oct 30, 2017
 *      Author: athena
 * 31899960 	228A - 20 	GNU C++14 	Accepted 	30 ms 	4 KB 	2017-10-30 19:40:54 	2017-10-30 19:40:54
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> horseshoes;

	for (int i = 0; i < 4; i++) {
		int h;
		cin >> h;
		horseshoes.push_back(h);
	}

	sort(horseshoes.begin(), horseshoes.end());

	horseshoes.erase(unique(horseshoes.begin(), horseshoes.end()), horseshoes.end());

	cout << 4 - horseshoes.size() << endl;

	return 0;
}
