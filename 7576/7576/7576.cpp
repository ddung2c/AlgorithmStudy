// 7576��
// ö���� �丶�� ���� --> ū â��,, ���� ���,, M*N
// �� ����, ���� ����
// ���� �丶�� --> ���� ���� �丶�並 �Ͱ� ����
// ��, ��, ��, ��
// �밢���� ������ ���� ����.
// ������ �丶����� ��ĥ�� ������ �� �Ͱ� �Ǵ���, �ּ� �ϼ�
// ���ڿ� �丶�䰡 ���� ���� ����.
//(�Է�) ����: M, ����: N
// ���� �丶��: 1, ���� ���� �丶��: 0, �丶�� ����: -1
//(���) ����� �� ��� �丶�䰡 �;������� 0
// �丶�䰡 ��� ���� ���ϴ� ��Ȳ�̸� -1

#include <iostream>
#include <queue>

using namespace std;

int tom[1001][1001];
int check[1001][1001];

int M, N;


int main() {
	cin >> M >> N;
	queue<pair <int, int>> q;

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++){
			cin >> tom[i][j];	//�丶�� �ֳ� ����
			check[i][j] = -1;	
			if (tom[i][j] == 1) { //�丶�䰡 ������ 
				check[i][j] = 0;	//
				q.push(make_pair(i, j));  //�丶�䰡 ���� ���� i,j���� ť�� ����
			}
		}
	}
	
	while (!q.empty()) {
		int r = q.front().first; //i ��
		int c = q.front().second; //j ��
		q.pop();

		if (tom[r - 1][c] == 0 && check[r - 1][c] == -1) {
			if (r - 1 >= 0 && c >= 0 && r - 1 < N && c < M) {
				check[r - 1][c] = check[r][c] + 1;
				tom[r - 1][c] = 1;
				q.push(make_pair(r - 1, c));
			}
		}
		if (tom[r][c - 1] == 0 && check[r][c - 1] == -1) {
			if (r >= 0 && c - 1 >= 0 && r < N && c - 1 < M) {
				check[r][c - 1] = check[r][c] + 1;
				tom[r][c-1] = 1;
				q.push(make_pair(r, c - 1));
			}
		}
		if (tom[r + 1][c] == 0 && check[r + 1][c] == -1) {
			if (r + 1 >= 0 && c >= 0 && r + 1 < N && c < M) {
				check[r + 1][c] = check[r][c] + 1;
				tom[r + 1][c] = 1;
				q.push(make_pair(r + 1, c));
			}
		}
		if (tom[r][c + 1] == 0 && check[r][c + 1] == -1) {
			if (r >= 0 && c + 1 >= 0 && r < N && c + 1 < M) {
				check[r][c + 1] = check[r][c] + 1;
				tom[r][c+1] = 1;
				q.push(make_pair(r, c + 1));
			}
		}
	}

	int cnt = 0;
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			if (cnt < check[i][j]) {
				cnt = check[i][j];
				cout << "check: " << check[i][j] << endl;
				cout << "cnt: " << cnt << endl;
			}
		}
	}

	/*for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			if (tom[i][j] == 0 && check[i][j] == -1) {
				cnt = -1;
			}
		}
	}*/
	cout << cnt << endl;

	

	
	return 0;
}