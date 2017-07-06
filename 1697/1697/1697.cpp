//���ٲ��� #1697
//����: ���� �� N
//����: �� K
//�����̴� �Ȱų� �����̵� �� �� ����
//�����̰� ��ġ X�� ��, �ȴ´ٸ� 1�� �� X-1 �Ǵ� X+1�� �̵�
//�����̵��� ���: 1�� �� 2*X�� �̵�
//�����̰� ������ ã�� �� �ִ� ���� ���� �ð��� �� ��?
//�Է�: �����̰� �ִ� ��ġ N�� ������ ��ġ K
// BFS (�ʺ� �켱 Ž��)

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

	while (!q.empty()) {  //ť�� �� ����� �� ����
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