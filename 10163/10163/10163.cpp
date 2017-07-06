#include <iostream>
#include <vector>
using namespace std;
// (1,4) 가장 왼쪽 아래, 너비 3, 높이 2 --> 1,4,2,3
// (0,0) 10, 10 
// 면적은 너비 * 높이 
int main() {
	int N; //색종이 개수
	cin >> N;
	int posx, posy, w, h;
	int table[101][101] = { 0 };
	// (posx, posy)는 왼쪽 위, (posx+h-1, posy+w-1)은 오른쪽 아래

	int count[102] = { 0 };
	//int k = 1; //1부터 N까지 몇 개 있는지 확인
	for (int i = 1; i <= N; i++) {
		cin >> posx >> posy >> w >> h;

		for (int t_x = posx; t_x < posx + h; t_x++) {
			for (int t_y = posy; t_y < posy + w; t_y++) {
				table[t_x][t_y] = i;
			}
		} //i번째 입력에서 table에 해당하는 부분을 i로 채움
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