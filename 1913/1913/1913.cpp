// 홀수인 자연수 N이 주어지면, 1부터 N^2까지의 자연수를 달팽이 모양으로
// N=5인 경우 6의 좌표는 (4,3)이다. 
#include <iostream>
using namespace std;

int main() {
	int rN;
	cin >> rN;
	int num = rN*rN;
	int i, j, n,m;
	int a[100][100];
	i = 1;
	j = 1;
	n = 1;
	m = 1;
	int N = rN;
	do{
		if (j == m) { //열이 1일 때, 처음 m=1
			for (i = n; i <= N; i++) { //(1,1)(2,1),(3,1),,,에 숫자 내림차순
				a[i][j] = num;
				num--;
				cout << "1번째 for문" << num << endl;
				cout << "i값  :" << i << endl;
				cout << a[i][j] << endl;
			}
			m++;  //m은 2가됨
		}
		if (i == N+1) {    //i==5, j=2부터 다시,, 
			for (j = m; j <= N; j++) {  //j=2부터 5까지
				a[i][j] = num;
				num--;
				cout << "2번째 for문" << a[i][j] << endl;
				cout << "j값  :" << j << endl;
				cout << a[i][j] << endl;
			}
		}  //j=5인 상태

		if (j == N+1) { //j=5이면 
			for (i = N-1; i >= n; i--) {  //
				a[i][j] = num;
				num--;
				cout << "3번째 for문" << a[i][j] << endl;
				cout << "i값  :" << i << endl;
				cout << a[i][j] << endl;
			}//i=1
			cout << "n값: " << n << endl;
			cout << "m값: " << m << endl;
		}
		if (i == n-1) { //i==1일때
			for (j = N - 1; j >= m; j--) {  
				a[i][j] = num;
				num--;
				cout << "4번째 for문" << a[i][j] << endl;
				cout << "j값  :" <<j << endl;
				cout << a[i][j] << endl;
			}//j=2인상태
			i++;  //i=2
		}
		N--; //N=4가 됨			
	} while (N < 0);

	for (int r = 1; r <= rN; r++) {
		for (int c = 1; c <= rN; c++) {
			cout << a[r][c] << " ";
		}
		cout << endl;
	}
	
	
	return 0;
}