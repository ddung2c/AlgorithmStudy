// 재용이는 최신 컴퓨터 10대, 
// 1번 - 2번, 2번 - 3번, 3번 - 4번.....
//10번 - 10번, 11번 - 1번, 12번 - 2번.....
// a^b개의 데이터,  마지막 데이터를 처리할 컴퓨터의 번호는?
#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int T;
	cin >> T;  //테스트 케이스 개수 T
	int a, b;
	unsigned int data;
	int *result=new int[T];
	int r = 0;
	
	for (int i = 0; i < T; i++) {
		//각각의 테스트 케이스에 대해 정수 a, b
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