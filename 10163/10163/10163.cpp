#include <iostream>
#include <vector>
using namespace std;
// (1,4) ���� ���� �Ʒ�, �ʺ� 3, ���� 2 --> 1,4,2,3
// (0,0) 10, 10 
// ������ �ʺ� * ���� 
int main() {
	int N; //������ ����
	cin >> N;
	int posx, posy, w, h;
	int table[101][101] = { 0 };
	// (posx, posy)�� ���� ��, (posx+h-1, posy+w-1)�� ������ �Ʒ�

	int count[102] = { 0 };
	//int k = 1; //1���� N���� �� �� �ִ��� Ȯ��
	for (int i = 1; i <= N; i++) {
		cin >> posx >> posy >> w >> h;

		for (int t_x = posx; t_x < posx + h; t_x++) {
			for (int t_y = posy; t_y < posy + w; t_y++) {
				table[t_x][t_y] = i;
			}
		} //i��° �Է¿��� table�� �ش��ϴ� �κ��� i�� ä��
	}

	for (int t_x = 0; t_x < 101; t_x++) {
		for (int t_y = 0; t_y < 101; t_y++) {
			for (int k = 1; k <= N; k++) {
				if (table[t_x][t_y] == k) {
					count[k]++;
				}
			}
		}
	}
	
	for (int i = 1; i <= N; i++) {
		cout << count[i] << endl;
	}
	return 0;
}