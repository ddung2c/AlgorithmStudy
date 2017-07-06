#include <iostream>
#include <string>
using namespace std;

int main() {
	int asize, bsize;
	string a;
	string b;
	
	cin >> a;
	cin >> b;
	if (a.size() >= b.size()) {
		cout << "go" << endl;
	}
	else
		cout << "no" << endl;

	return 0;
}