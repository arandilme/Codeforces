/*
 * nextround.cpp
 *
 *  Created on: Oct 22, 2017
 *      Author: athena
 */

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, k, a;
	cin >> n >> k;

	vector<int> participants;

	for (int i = 0; i < n; i++) {
		cin >> a;
		participants.push_back(a);
	}

	int count = 0;

	for (int j = 0; j < n; j++) {
		if (participants[j] >= participants[k-1] && participants[j] > 0) {
			count++;
		}
	}

	cout << count << endl;

	return 0;
}
