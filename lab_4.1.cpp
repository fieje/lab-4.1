#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int k , N;
	double res = 1.0;

	cout << "N = "; cin >> N;

	// Цикл while
	int i = 1;
	while (i <= 25) {
		res += sqrt(1 + (N / k));
		i++;
	}
	cout << "While  " << res << endl;

	// Цикл do-while
	res = 0;
	i = 1;
	do {
		res += sqrt(1 + (N / k));
		i++;
	} while (i <= N);
	cout << "Do-while  " << res << endl;

	// Цикл for
	res = 0;
	for (N = k, i = 1; i <= 25; i++) {
		res += sqrt(1 + (N / k));
	}
	cout << "For  " << res << endl;

	// Цикл for зі зменшенням i
	res = 0;
	for (int i = 25; i >= 1; i--) {
		res += sqrt(1 + (N / k));
	cout << "For  i decreasing " << res << endl;

	return 0;
}
