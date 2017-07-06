#include <iostream>
using namespace std;

int main() {
	int year;
	cin >> year;
	if (year % 4 == 0) {  //4의 배수이면
		if (year % 100 == 0) {  //4의 배수이고 100의 배수이면
			if (year % 400 == 0) { //4의 배수이고 100의 배수인데, 400의 배수이면
				cout << "1";
				return 0;
			}
			cout << "0";
			return 0;
		}
		cout << "1";
	}
	else
		cout << "0";
	return 0;
}