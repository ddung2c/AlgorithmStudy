// �����佺�׳׽� ü�� N���� �۰ų� ���� ��� �Ҽ��� ã�� 
// 1. 2~N���� ��� ������ ���´�. 
// 2. ���� ������ ���� ���� �� ���� ���� ���� ã�´�. 
//    �̰��� P���ϰ�, �� ���� �Ҽ��̴�. 
// 3. P�� �����, ���� ������ ���� P�� ����� ũ�� ������� �����.
// 4. ���� ��� ���ڸ� ������ �ʾҴٸ�, �ٽ� 2�� �ܰ�� ����. 
// N, K�� �־����� ��, K��° ����� ���� ���ϴ� ���α׷��� �ۼ��Ϥӿ�

#include <iostream>
using namespace std;

int main() {
	int N, K;
	int *del;
	int *arr;
	int num = 2;
	cin >> N >> K;
	int result = 0;
	del = new int[N];
	arr = new int[N];
	for (int i = 1; i < N; i++) {
		arr[i] = num;
		num++;
	}
	del[1] = arr[1];  //�迭�� 1�� ° ���Ұ� ������ ����
	int j = 1;
	int k = 2;
	
	//int mul = 2;
	do {
		
		for (int mul = 2; mul < N; mul++) {

			for (int i = j + 1; i < N; i++) {
				if (arr[j] * mul == arr[i]) {  //j�� ° ������ ����� arr
					cout << arr[i] << endl;
					cout << "ù ��°" << endl;
					del[k] = arr[i];
					k++;
					arr[i] = 0; //������ ���ҵ��� 0���� �ٲ�
					result++;					
				}
				// arr*2���ѰŶ� arr�� 6�� �̹� 0�� ���..

			}
		}
		
		for (int i = 2; i < N; i++) {
			if (arr[i] != 0) {
				cout << arr[i] << endl;
				cout << "�� ��°" << endl;
				j = i;
				del[k] = arr[i];
				k++;
				arr[i] = 0;
				result++;
			}
			
		}
		break;
		
	} while (result == K);


	for (int i = 1; i < N; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	for (int i = 1; i < N; i++) {
		cout << del[i] << " ";
	}
	
	cout << del[K+2] << endl;

	

	return 0;
}
 
