//RGB �Ÿ��� R,G,B �� �ϳ��� ĥ�Ϸ��� ��
//�̿��� ���� ������ ĥ�� �� ����.
//�� i�� �̿��� �� i-1, i+1 ��. ó�� ���� ������ ���� �̿��� �ƴ�
//�� ���� �������� ĥ�� �� ��� ���, �ʷ����� ĥ�� �� ��� ���, ����� �־��� ��,
//��� ���� ĥ�� �� ��� ����� �ּڰ��� ���ϴ� ���α׷�

//1: ���� �� N
//N<=1000
//2: N���� �ٿ� �� ���� ĥ�� ���� ��� (R G B)

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
			if (j == 0) {	//j==0 ������
				cost[j][i] = min(cost[1][i - 1], cost[2][i - 1]) + color[j][i];
			}
			else if (j == 1) {	//j==1 �ʷϻ�
				cost[j][i] = min(cost[0][i - 1], cost[2][i - 1]) + color[j][i];
			}
			else if (j == 2) {	//j==2 �Ķ���
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
