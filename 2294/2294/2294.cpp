#include <iostream>
using namespace std;
// 2294
// <n가지 종류의 동전> --> 동전이 나타내는 가치는 다름
// 가치의 합이 k가 되도록, 동전의 개수는 최소가 되도록
// 각각의 동전은 몇개라도 사용 가능

// 출력: 사용한 동전의 최소 개수는? 불가능한 경우 -1
int main() {
	int n, k; // n개의 줄에는 동전의 가치
	cin >> n >> k;
	int v[101];
	int d[100001];

	for (int i = 1; i <= n; i++) {
		cin >> v[i];
		// v[] = { 1, 5, 12}
	}
	
	for (int i = 1; i <= k; i++) {
		d[i] = -1;
	}
	d[0] = 0;

	for (int i = 1; i <= n; i++) {//v[1]로 먼저 d[]값을 계산, v[2], v[3] 확인
		for (int j = 0; j <= k; j++) { //d[0] ~ d[k] 계산
			if (v[i] <= j && d[j - v[i]] != -1) {
				//동전의 가치가 j값보다 작고, j-v[i]원을 만드는데 아직 검토하지  i원 만드는데 필요한 동전 개수 계산 가능
				if (d[j] > d[j - v[i]] + 1 || d[j] == -1) {
					d[j] = d[j - v[i]] + 1;  //동전 개수 계산
				}
			}
		}
	}
		
	cout << d[k] << endl;

	
	return 0;
}
