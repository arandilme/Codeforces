/*
 * stonesonthetable.cpp
 *
 *  Created on: Oct 25, 2017
 *      Author: athena
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	string stones;
	cin >> n >> stones;

	int counter = 0;

	for (int i = 0; i < n; i++) {
		if (stones[i] == stones[i-1]) {
			counter++;
		}
	}


	cout << counter << endl;

	return 0;
}
