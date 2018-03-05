/*
 * 535A - Tavas and Nafas.cpp
 * http://codeforces.com/problemset/problem/535/A
 *  Created on: Mar 6, 2018
 *      Author: athena
 * 35978615 	535A - 15 	GNU C++14 	Accepted 	15 ms 	1976 KB 	2018-03-06 02:38:02 	2018-03-06 02:40:01
 */

#include <iostream>
using namespace std;

int main() {
	string x[20] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
	string y[8] = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

	int n;
	cin >> n;

	if (n < 20) {
		cout << x[n];
	} else {
		cout << y[n / 10 - 2];
		if (n % 10 != 0) {
			cout << "-" << x[n % 10];
		}
	}

	return 0;
}
