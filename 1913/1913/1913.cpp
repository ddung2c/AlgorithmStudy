// Ȧ���� �ڿ��� N�� �־�����, 1���� N^2������ �ڿ����� ������ �������
// N=5�� ��� 6�� ��ǥ�� (4,3)�̴�. 
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
		if (j == m) { //���� 1�� ��, ó�� m=1
			for (i = n; i <= N; i++) { //(1,1)(2,1),(3,1),,,�� ���� ��������
				a[i][j] = num;
				num--;
				cout << "1��° for��" << num << endl;
				cout << "i��  :" << i << endl;
				cout << a[i][j] << endl;
			}
			m++;  //m�� 2����
		}
		if (i == N+1) {    //i==5, j=2���� �ٽ�,, 
			for (j = m; j <= N; j++) {  //j=2���� 5����
				a[i][j] = num;
				num--;
				cout << "2��° for��" << a[i][j] << endl;
				cout << "j��  :" << j << endl;
				cout << a[i][j] << endl;
			}
		}  //j=5�� ����

		if (j == N+1) { //j=5�̸� 
			for (i = N-1; i >= n; i--) {  //
				a[i][j] = num;
				num--;
				cout << "3��° for��" << a[i][j] << endl;
				cout << "i��  :" << i << endl;
				cout << a[i][j] << endl;
			}//i=1
			cout << "n��: " << n << endl;
			cout << "m��: " << m << endl;
		}
		if (i == n-1) { //i==1�϶�
			for (j = N - 1; j >= m; j--) {  
				a[i][j] = num;
				num--;
				cout << "4��° for��" << a[i][j] << endl;
				cout << "j��  :" <<j << endl;
				cout << a[i][j] << endl;
			}//j=2�λ���
			i++;  //i=2
		}
		N--; //N=4�� ��			
	} while (N < 0);

	for (int r = 1; r <= rN; r++) {
		for (int c = 1; c <= rN; c++) {
			cout << a[r][c] << " ";
		}
		cout << endl;
	}
	
	
	return 0;
}