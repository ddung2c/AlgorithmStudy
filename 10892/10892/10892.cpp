//N명의 사람이 영토를 나눔.
//각자 3개의 말뚝을 선택
//말뚝들을 선분으로 이었을 때 생기는 삼각형
//겹치면 안됨
// N=사람들의 수
// 3N 줄에는 각 말뚝의 위치를 나타내는 두 정수 x,y
// y=0, x=0,1,2,3,4,5 끝나면 
// y=1, x=0,1,2,3,4,5  쭉 한 뒤에 
#include <iostream>
using namespace std;

int main() {
	int N;//사람 수 
	int x[100], y[100];
	int num[100]; //몇번짼지
	bool xflag[100];
	bool yflag[100];
	int result;
	cin >> N;
	for (int i = 0; i < 3 * N; i++) {
		cin >> x[i];
		cin >> y[i];  //말뚝의 x,y값을 넣고, 
		xflag[x[i]] = true;
		yflag[y[i]] = true;
		num[i] = i+1;   //순서를 넣고,,(나중에 생략)
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