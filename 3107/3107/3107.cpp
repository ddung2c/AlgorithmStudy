//IPv6�� ���̰� 128��Ʈ�� ������ ���ͳ� ��������
//�ּҴ� 32�ڸ��� 16������ 4�ڸ��� ���� ��Ÿ��
//�̶� �� �׷��� :���� ����
//ex) 2001:0db8:85a3:0000:0000:8a2e:0370:7334
// 
#include <iostream>
#include <queue>
#include <vector>
#include <String>
using namespace std;

int main() {
	//vector<char> v;
	
	vector<char> v;
	queue<char> q;
	char array[39] = { '0', };

	char x;
	char a;  //IPv6 �ּҰ�

	cin >> a;    //IPv6 �ּ� �Է�
	//v.push_back(a);  
	q.push(a);
	

	for (int i = 0; i < 4; i++) {
		array[i] = q.front();
		q.pop();
		if (array[(i + 1) % 4] == ':') {


		}
		else
			array[] = '0';

	}

	//4���� int�� �迭�� �ְ�, �տ� 0ä�� �ְ� ���

	//:�� ���� �� ���� �а�, 4���ں��� ������, �տ� 0�� ����
	




	/*for (int i = 0; ; i++) {
		if (v.at(i) == ':' && (i + 1) % 5 != 0) {
			array[x]= v.
		}
	}*/
	



	return 0;
}