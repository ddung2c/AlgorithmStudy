//N���� ����� ���並 ����.
//���� 3���� ������ ����
//���ҵ��� �������� �̾��� �� ����� �ﰢ��
//��ġ�� �ȵ�
// N=������� ��
// 3N �ٿ��� �� ������ ��ġ�� ��Ÿ���� �� ���� x,y
// y=0, x=0,1,2,3,4,5 ������ 
// y=1, x=0,1,2,3,4,5  �� �� �ڿ� 
#include <iostream>
using namespace std;

int main() {
	int N;//��� �� 
	int x[100], y[100];
	int num[100]; //���²��
	bool xflag[100];
	bool yflag[100];
	int result;
	cin >> N;
	for (int i = 0; i < 3 * N; i++) {
		cin >> x[i];
		cin >> y[i];  //������ x,y���� �ְ�, 
		xflag[x[i]] = true;
		yflag[y[i]] = true;
		num[i] = i+1;   //������ �ְ�,,(���߿� ����)
	}
	int count;
	for (int i = 0;; i++) {
		for (int j = 0;; j++) {
			if (xflag[x[j]] == true && yflag[y[i]]==true) {
				cout << num[j] << " ";
				count++;
				if (count == 3) {
					cout << endl;
					break;
				}
			}
			count = 1;
		}
	}
	
}