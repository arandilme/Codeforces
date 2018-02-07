/*
 * 490A - Team Olympiad.cpp
 * http://codeforces.com/problemset/problem/490/A
 *  Created on: Feb 8, 2018
 *      Author: athena
 * 35034370 	490A - 20 	GNU C++14 	Accepted 	15 ms 	2024 KB 	2018-02-07 23:26:27 	2018-02-07 23:35:40
 */

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> v[4];

	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		v[t].push_back(i+1);
	}

	int numberOfTeams = min(v[1].size(), min(v[2].size(), v[3].size()));
	cout << numberOfTeams << endl;

	for (int i = 0; i < numberOfTeams; i++) {
		cout << v[1][i] << " " << v[2][i] << " " << v[3][i] << endl;
	}

	return 0;
}
