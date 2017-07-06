//숨바꼭질 #1697
//수빈: 현재 점 N
//동생: 점 K
//수빈이는 걷거나 순간이동 할 수 있음
//수빈이가 위치 X일 때, 걷는다면 1초 후 X-1 또는 X+1로 이동
//순간이동의 경우: 1초 후 2*X로 이동
//수빈이가 동생을 찾을 수 있는 가장 빠른 시간은 몇 초?
//입력: 수빈이가 있는 위치 N과 동생의 위치 K
// BFS (너비 우선 탐색)

//5 17   --> 5 10 9 18 17  
//4 15   --> 4 8 16 15

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int visit[100001];
queue<int> q;
int N, K;

int bfs() {
	q.push(N);
	visit[N] = 1;

	while (!q.empty()) {  //큐가 다 비었을 때 까지
		int p = q.front();
		q.pop();
		if (p == K) {
			return visit[p] - 1;
		}

		if (p - 1 >= 0 && visit[p-1] == 0) {
			visit[p - 1] = visit[p] + 1;
			q.push(p - 1);
		}
		if (p + 1 <= 100000 && visit[p + 1] == 0) {
			visit[p + 1] = visit[p] + 1;
			q.push(p + 1);
		}
		if (p * 2 <= 100000 && visit[2 * p] == 0) {
			visit[p * 2] = visit[p] + 1;
			q.push(p * 2);
		}

	}

}
int main() {
	cin >> N >> K;
	cout << bfs();
	return 0;
}