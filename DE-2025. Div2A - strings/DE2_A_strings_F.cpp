#include <iostream>
#include <string>

using namespace std;

int F() {
	int n;
	cin >> n;

	string figure;
	int sum = 0;
	for (int i = 0; i < n; ++i) {
		cin >> figure;
		if (figure == "Tetrahedron") {
			sum += 4;
		}
		else if (figure == "Cube") {
			sum += 6;
		}
		else if (figure == "Octahedron") {
			sum += 8;
		}
		else if (figure == "Dodecahedron") {
			sum += 12;
		}
		else if (figure == "Icosahedron") {
			sum += 20;
		}
	}
	cout << sum;
	return 0;
}