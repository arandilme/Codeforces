/*
 * 785A - Anton and Polyhedrons.cpp
 * http://codeforces.com/problemset/problem/785/A
 *  Created on: Feb 28, 2018
 *      Author: athena
 * 35776111 	785A - 19 	GNU C++14 	Accepted 	452 ms 	1856 KB 	2018-02-28 01:38:32 	2018-02-28 02:02:18
 */

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int count(0);

	while (n--) {
		string s;
		cin >> s;

		if (s == "Tetrahedron") {
			count += 4;
		}
		if (s == "Cube") {
			count += 6;
		}
		if (s == "Octahedron") {
			count += 8;
		}
		if (s == "Dodecahedron") {
			count += 12;
		}
		if (s == "Icosahedron") {
			count += 20;
		}
	}

	cout << count << endl;

}
