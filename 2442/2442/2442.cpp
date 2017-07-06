#include <iostream>
using namespace std;

int main() {
	int x;
	int s, j; //s´Â space °³¼ö
	cin >> x;
	s = x;
	for (int i = 1; i <= x; i++) {
		for (j = s - 1; j > 0; j--) {
			cout << " ";
		}
		s--;
		j = s;

		for (int j = 1; j <= 2 * i - 1; j++) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}