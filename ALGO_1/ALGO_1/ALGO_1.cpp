#include <iostream>
#include <vector>

using namespace std;
//Ÿ�δ� 0���� N-1�̶� �̸��� ���� N���� ���� Ű�� �ֽ��� �־����ϴ�.
//�� �� i��°�� ���� �뷮�� capacities[i] ����
//Ÿ�ΰ� i��° ���� ���� Ű�� �ֽ��� ���� bottles[i]����
//Ÿ�δ� ���� Ű�� �ֽ��� ��й��Ϸ��� �ϸ�, 0���� M-1���� Mȸ ����
//i��° ������ Ÿ�ΰ� �� fromId[i]���� �� toId[i]�� Ű�� �ֽ��� �ִ� ���� �ǹ�
//�� fromId[i]�� ��� �ְų� �� toId[i]�� �� �� �ִ� ����, Ÿ�δ� �� �̻� Ű�� �ֽ��� ���� ����

//capacities : 2~50���� ��Ұ� �ִ� �迭, �� ��Ҵ� 1~1000000������ ��
//bottles: capacities�� ���� ���� ��Ұ� �ִ� �迭, 
//fromId: 1~50���� ��Ұ� �ִ� �迭
//toId: fromId�� ���� ���� ��Ұ� �ִ� �迭
//fromId�� toId�� ���� �ٸ� ��

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
