//RGB 거리를 R,G,B 중 하나로 칠하려고 함
//이웃은 같은 색으로 칠할 수 없다.
//집 i의 이웃은 집 i-1, i+1 임. 처음 집과 마지막 집은 이웃이 아님
//각 집을 빨강으로 칠할 때 드는 비용, 초록으로 칠할 때 드는 비용, 비용이 주어질 때,
//모든 집을 칠할 때 드는 비용의 최솟값을 구하는 프로그램

//1: 집의 수 N
//N<=1000
//2: N개의 줄에 각 집을 칠할 떄의 비용 (R G B)

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int N;
	int color[1001][3] = { 0 };
	int cost[1001][3] = { 0 };

	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> color[j][i];
		}
	}

	for (int j = 0; j < 3; j++) {
		cost[j][0] = color[j][0];
	}

	for (int i = 1; i < N; i++) {
		for (int j = 0; j < 3; j++) {
			if (j == 0) {	//j==0 빨간색
				cost[j][i] = min(cost[1][i - 1], cost[2][i - 1]) + color[j][i];
			}
			else if (j == 1) {	//j==1 초록색
				cost[j][i] = min(cost[0][i - 1], cost[2][i - 1]) + color[j][i];
			}
			else if (j == 2) {	//j==2 파란색
				cost[j][i] = min(cost[0][i - 1], cost[1][i - 1]) + color[j][i];
			}
		}	
	}

	int m = cost[0][N - 1];
	for (int j = 0; j < 3; j++) {
		if (m > cost[j][N - 1]) {
			m = cost[j][N - 1];
		}
	}

	cout << m;

	return 0;
}
