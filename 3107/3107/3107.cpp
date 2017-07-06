//IPv6는 길이가 128비트인 차세대 인터넷 프로토콜
//주소는 32자리의 16진수를 4자리씩 끊어 나타냄
//이때 각 그룹은 :으로 구분
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
	char a;  //IPv6 주소값

	cin >> a;    //IPv6 주소 입력
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

	//4개의 int를 배열에 넣고, 앞에 0채워 넣고 출력

	//:가 나올 때 까지 읽고, 4글자보다 작으면, 앞에 0을 삽입
	




	/*for (int i = 0; ; i++) {
		if (v.at(i) == ':' && (i + 1) % 5 != 0) {
			array[x]= v.
		}
	}*/
	



	return 0;
}