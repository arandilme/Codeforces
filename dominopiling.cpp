/*
 * dominopiling.cpp
 *
 *  Created on: Oct 22, 2017
 *      Author: athena
 */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int m, n;
	cin >> m >> n;

	int domino = (floor(m * n * 0.5));

	cout << domino;

	return 0;
}
