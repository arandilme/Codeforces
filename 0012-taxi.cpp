/*
 * taxi.cpp
 * http://codeforces.com/problemset/problem/158/B
 *  Created on: Oct 25, 2017
 *      Author: athena
 * 31695302 	GNU C++14 	Accepted 	186 ms 	8 KB 	2017-10-25 01:59:22 	2017-10-25 01:59:22
 */

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;

	int count1 = 0;
	int count2 = 0;
	int count3 = 0;
	int count4 = 0;

	for (int i = 0; i < n; i++) {
		int group;
		cin >> group;

		if (group == 1) {
			count1++;
		} else if (group == 2) {
			count2++;
		} else if (group == 3) {
			count3++;
		} else {
			count4++;
		}
	}

	int numberOfTaxis = 0;

	numberOfTaxis += count4;

	if (count3 >= count1) {
		numberOfTaxis += count3;
		count1 = 0;
		count3 = 0;
	} else {
		numberOfTaxis += count3;
		count1 -= count3;
		count3 = 0;
	}

	numberOfTaxis += count2 / 2;

	if (count2 % 2 == 1) {
		numberOfTaxis++;
		count1 -= 2;
	}

	if (count1 > 0) {
		numberOfTaxis += (count1 / 4);
		if (count1 % 4) {
			numberOfTaxis++;
		}
	}

	cout << numberOfTaxis;

	return 0;
}
