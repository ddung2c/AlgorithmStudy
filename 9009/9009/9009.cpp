#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int T;
	int n,k;
	int fibonacci[100];   //fibonacci �迭
	fibonacci[0] = 0;
	fibonacci[1] = 1;
	int max[100];  //�� ū�� max��° �Ǻ���ġ
	cin >> T;
	for (int i = 0; i < T; i++) {
		int m = 0; //max�� �迭
		cin >> n;
		while (n != 0) {
			for (k = 2;; k++) {
				fibonacci[k] = fibonacci[k - 1] + fibonacci[k - 2];
				if (fibonacci[k] > n) {
					max[m] = k - 1;
					m++;
					
					break;
				}
			}
			n -= fibonacci[k - 1];
		}
		for (int i = m - 1; i >= 0; i--) {
			cout << fibonacci[max[i]] << " ";
		}
		cout << endl;
	}	

	return 0;
}