#include <iostream>
using namespace std;

int N, K;
int cnt;
int check[1001];
int result;

int main() {
	
	cin >> N >> K;


	for (int i = 2; i <= N; i++) {
		for (int j = i; j <= N; j += i) {
			if (check[j] == 0) {
				cnt++;
				check[j] = 1;
			}
			if (cnt == K) {
				result = j;
				break;
			}
		}
		if (cnt == K)
			break;
	}
	cout << result << endl;
	return 0;
}