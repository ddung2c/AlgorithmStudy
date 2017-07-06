// 에라토스테네스 체는 N보다 작거나 같은 모든 소수를 찾는 
// 1. 2~N까지 모든 정수를 적는다. 
// 2. 아직 지우지 않은 숫자 중 가장 작은 수를 찾는다. 
//    이것을 P라하고, 이 수는 소수이다. 
// 3. P를 지우고, 아직 지우지 않은 P의 배수를 크기 순서대로 지운다.
// 4. 아직 모든 숫자를 지우지 않았다면, 다시 2번 단계로 간다. 
// N, K가 주어졌을 때, K번째 지우는 수를 구하는 프로그램을 작성하ㅣ오

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
	del[1] = arr[1];  //배열의 1번 째 원소가 지워질 원소
	int j = 1;
	int k = 2;
	
	//int mul = 2;
	do {
		
		for (int mul = 2; mul < N; mul++) {

			for (int i = j + 1; i < N; i++) {
				if (arr[j] * mul == arr[i]) {  //j번 째 원소의 배수와 arr
					cout << arr[i] << endl;
					cout << "첫 번째" << endl;
					del[k] = arr[i];
					k++;
					arr[i] = 0; //지워진 원소들은 0으로 바꿈
					result++;					
				}
				// arr*2곱한거랑 arr에 6이 이미 0일 경우..

			}
		}
		
		for (int i = 2; i < N; i++) {
			if (arr[i] != 0) {
				cout << arr[i] << endl;
				cout << "두 번째" << endl;
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
 
