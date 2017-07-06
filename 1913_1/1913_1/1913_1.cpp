// 홀수인 자연수 N이 주어지면, 1부터 N^2까지의 자연수를 달팽이 모양으로
// N=5인 경우 6의 좌표는 (4,3)이다. 
// 2차원 동적 할당
#include <iostream>
using namespace std;

int main() {
	int rN;
	cin >> rN;
	int N = rN;
	int num = rN*rN;
	int i, j, n, m;
	int **a;
	a = new int *[N];
	for (int z = 1; z<= N; z++) {
		a[z] = new int[N];
	}
	int wh;
	cin >> wh;
	int row, col;
	i = 1;
	j = 1;
	n = 1;
	m = 1;
	do {
		if (j == m) { //열이 1일 때, 처음 m=1
			for (i = n; i <= N; ++i) { //(1,1)(2,1),(3,1),,,에 숫자 내림차순
				a[i][j] = num;
				num--;
			}
			m++;  //m은 2가됨
			i--;
		}
		if (i == N) {    //i==5, j=2부터 다시,, 
			for (j = m; j <= N; ++j) {  //j=2부터 5까지
				a[i][j] = num;
				num--;
			}
			j--;
		}  //j=5인 상태

		if (j == N) { //j=5이면 
			for (i = N - 1; i >= n; --i) {  //
				a[i][j] = num;
				num--;
			}//i=1
			i++;
		}
		if (i == n) { //i==1일때
			for (j = N - 1; j >= m; --j) {
				a[i][j] = num;
				num--;
			}//j=2인상태
			j++;  //i=2
			n++;
		}
		N--; //N=4가 됨	
	} while (N!=0);


	for (int r = 1; r <= rN; r++) {
		for (int c = 1; c <= rN; c++) {
			cout << a[r][c] << " ";
			if (wh == a[r][c]) {
				row = r;
				col = c;
			}
		}
		cout << endl;
	}

	cout << row << " " << col << endl;
	for (int z = 1; z<= N; z++) {
		delete[] a[z];
	}

	return 0;
}