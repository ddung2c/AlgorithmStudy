#include <iostream>

using namespace std;

int main() {
	int a[9];
	int max = 0;
	int val = 0;

	for (int i = 0; i < 9; i++) {
		cin >> a[i];
		if (max < a[i]) {
			max = a[i];
			val = i + 1;
		}
	}

	cout << max << endl << val << endl;
	return 0;
}