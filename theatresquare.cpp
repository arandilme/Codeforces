/*
 * theatresquare.cpp
 *
 *  Created on: Oct 21, 2017
 *      Author: athena
 */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double n, m, a;
	cin >> n >> m >> a;

	long long result = ceil(n/a) * ceil(m/a);

	cout << result;

	return 0;
}
