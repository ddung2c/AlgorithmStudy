// Ȧ���� �ڿ��� N�� �־�����, 1���� N^2������ �ڿ����� ������ �������
// N=5�� ��� 6�� ��ǥ�� (4,3)�̴�. 
// 2���� ���� �Ҵ�
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
		if (j == m) { //���� 1�� ��, ó�� m=1
			for (i = n; i <= N; ++i) { //(1,1)(2,1),(3,1),,,�� ���� ��������
				a[i][j] = num;
				num--;
			}
			m++;  //m�� 2����
			i--;
		}
		if (i == N) {    //i==5, j=2���� �ٽ�,, 
			for (j = m; j <= N; ++j) {  //j=2���� 5����
				a[i][j] = num;
				num--;
			}
			j--;
		}  //j=5�� ����

		if (j == N) { //j=5�̸� 
			for (i = N - 1; i >= n; --i) {  //
				a[i][j] = num;
				num--;
			}//i=1
			i++;
		}
		if (i == n) { //i==1�϶�
			for (j = N - 1; j >= m; --j) {
				a[i][j] = num;
				num--;
			}//j=2�λ���
			j++;  //i=2
			n++;
		}
		N--; //N=4�� ��	
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