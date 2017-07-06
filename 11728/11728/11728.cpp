#include <iostream>
using namespace std;
// 1: 배열 A의 크기 N, 배열 B의 크기 M (1<=N,M<=1,000,0000)
// 2: 배열 A의 내용
// 3: 배열 B의 내용
int main() {
	int nA, nB;
	cin >> nA >> nB;


	int *arrA = new int[nA];
	int *arrB = new int[nB];

	int *arrAB = new int[nA + nB];
	for (int i = 0; i < nA; i++) {
		cin >> arrA[i];
		//arrAB[i] = arrA[i];
	}
	for (int i = 0; i < nB; i++) {
		cin >> arrB[i];
		//arrAB[nA + i] = arrB[i];
	}
	int a, b, i;
	for (a = 0, b = 0, i = 0; a < nA, b < nB, i < nA + nB;i++) {
		if (a == nA || b == nB) {
			break;
		}
		else if (arrA[a] < arrB[b])
		{
			arrAB[i] = arrA[a];
			a++;
		}
		else if (arrA[a] >= arrB[b])
		{
			arrAB[i] = arrB[b];
			b++;
		}
	}	
	//b=1, i=1, a=0
	while (i < nA + nB) {
		if (a == nA) {
			arrAB[i] = arrB[b];
			b++;
		}
		else if (b == nB) {
			arrAB[i] = arrA[a]; 
			a++;
		}
		i++;
	}

 	//출력
	for (int i = 0; i < nA+ nB; i++) {
		cout << arrAB[i] << " ";
	}

	return 0;
}