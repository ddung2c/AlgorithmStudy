// ����̴� �ֽ� ��ǻ�� 10��, 
// 1�� - 2��, 2�� - 3��, 3�� - 4��.....
//10�� - 10��, 11�� - 1��, 12�� - 2��.....
// a^b���� ������,  ������ �����͸� ó���� ��ǻ���� ��ȣ��?
#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int T;
	cin >> T;  //�׽�Ʈ ���̽� ���� T
	int a, b;
	unsigned int data;
	int *result=new int[T];
	int r = 0;
	
	for (int i = 0; i < T; i++) {
		//������ �׽�Ʈ ���̽��� ���� ���� a, b
		cin >> a >> b;
		data = pow(a, (b%4));
		if (b % 4 == 0) {
			data = pow(a, 4);
		}
		result[r] = data % 10;
		if (result[r] == 0) {
			result[r] = 10;
		}
		r++;
	}

	for (int i = 0; i < T; i++) {
		cout << result[i] << endl;
	}
	return 0;
}