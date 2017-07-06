#include <iostream>
#include <vector>

using namespace std;
//타로는 0부터 N-1이라 이름을 붙인 N개의 병에 키위 주스를 넣었습니다.
//이 때 i번째의 병의 용량은 capacities[i] 리터
//타로가 i번째 병에 넣은 키위 주스의 양을 bottles[i]리터
//타로는 병에 키위 주스를 재분배하려고 하며, 0부터 M-1까지 M회 조작
//i번째 조작은 타로가 병 fromId[i]부터 병 toId[i]에 키위 주스를 넣는 것을 의미
//병 fromId[i]가 비어 있거나 병 toId[i]가 꽉 차 있는 순간, 타로는 더 이상 키위 주스를 넣지 않음

//capacities : 2~50개의 요소가 있는 배열, 각 요소는 1~1000000사이의 값
//bottles: capacities와 같은 수의 요소가 있는 배열, 
//fromId: 1~50개의 요소가 있는 배열
//toId: fromId와 같은 수의 요소가 있는 배열
//fromId와 toId는 서로 다른 값

class KiwiJuice {
public:
	vector <int> thePouring(vector <int> capacities, vector <int> bottles, vector <int> fromId, vector <int> toId) {
		
		for (int i = 0; i < fromId.size(); i++) {
			int sum = bottles[fromId[i]] + bottles[toId[i]];
			if (capacities[toId[i]] < sum ) {
				bottles[toId[i]] = capacities[toId[i]];
				bottles[fromId[i]] = sum - capacities[toId[i]];
			}
			else {
				bottles[toId[i]] = sum;
				bottles[fromId[i]] = 0;
			}

		}

		return bottles;


	}
};

int main() {

	KiwiJuice kiwi;

	vector<int>& ret = kiwi.thePouring(vector<int>{ 14, 35, 86, 58, 25, 62}, vector<int>{ 6, 34, 27, 38, 9, 60}, vector <int>{ 1,2,4,5,3,3,1,0 }, vector<int>{ 0,1,2,4,2,5,3,1});
	for (int i = 0; i < ret.size(); i++) {
		std::cout << ret[i] << " ";
	}
	std::cout << std::endl;

	return 0;
}
