// 7576번
// 철수의 토마토 농장 --> 큰 창고,, 격자 모양,, M*N
// 잘 익은, 익지 않은
// 익은 토마토 --> 익지 않은 토마토를 익게 만듦
// 왼, 오, 앞, 뒤
// 대각선은 영향을 받지 않음.
// 보관된 토마토들이 며칠이 지나면 다 익게 되는지, 최소 일수
// 상자에 토마토가 없을 수도 있음.
//(입력) 가로: M, 세로: N
// 익은 토마토: 1, 익지 않은 토마토: 0, 토마토 없음: -1
//(출력) 저장될 때 모든 토마토가 익어있으면 0
// 토마토가 모두 익지 못하는 상황이면 -1

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
			cin >> tom[i][j];	//토마토 있나 없나
			check[i][j] = -1;	
			if (tom[i][j] == 1) { //토마토가 있으면 
				check[i][j] = 0;	//
				q.push(make_pair(i, j));  //토마토가 있을 때의 i,j값을 큐에 넣음
			}
		}
	}
	
	while (!q.empty()) {
		int r = q.front().first; //i 값
		int c = q.front().second; //j 값
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