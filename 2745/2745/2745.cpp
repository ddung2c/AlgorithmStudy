//B���� �� N�� �־�����. �� ���� 10�������� �ٲ� ����ϴ� ���α׷��� �ۼ�.
//10������ �Ѿ�� ������ ���ڷ� ǥ���� �� ���� �ڸ��� �ִ�. 
//A:10, B:11, ... F:16, ..., Y:34, Z:35
//ZZZZZZ,, 36���� 2<=B<=36
//B���� �� N�� 10�������� �ٲٸ� �׻� 10�ﺸ�� �۰ų� ����. 

// 1���� �迭 ���� �Ҵ� + char�� ����!!
#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main() {
	int B;
	char *N = new char;  //���� �Ҵ�

	cin >> N;
	cin >> B;
	
	int decimal =0;
	int sum = 0;
	int i;
	int p;
	
	for (i = 0; i < strlen(N); i++) {
		p= strlen(N)-i-1;
		
		switch (N[i]) {
		case '0':
			decimal = 0 * pow(B, p);
			break;
		case '1':
			decimal = 1 * pow(B, p);
			break;
		case '2':
			decimal = 2 * pow(B, p);
			break;
		case '3':
			decimal = 3 * pow(B, p);
			break;
		case '4':
			decimal = 4 * pow(B, p);
			break;
		case '5':
			decimal = 5 * pow(B, p);
			break;
		case '6':
			decimal = 6 * pow(B, p);
			break;
		case '7':
			decimal = 7 * pow(B, p);
			break;
		case '8':
			decimal = 8 * pow(B, p);
			break;
		case '9':
			decimal = 9 * pow(B, p);
			break;
		case 'A':
			decimal = 10 * pow(B, p);
			break;
		case 'B':
			decimal = 11 * pow(B, p);
			break;
		case 'C':
			decimal = 12 * pow(B, p);
			break;
		case 'D':
			decimal = 13 * pow(B, p);
			break;
		case 'E':
			decimal = 14 * pow(B, p);
			break;
		case 'F':
			decimal = 15 * pow(B, p);
			break;
		case 'G':
			decimal = 16 * pow(B, p);
			break;
		case 'H':
			decimal = 17 * pow(B, p);
			break;
		case 'I':
			decimal = 18 * pow(B, p);
			break;
		case 'J':
			decimal = 19 * pow(B, p);
			break;
		case 'K':
			decimal = 20 * pow(B, p);
			break;
		case 'L':
			decimal = 21 * pow(B, p);
			break;
		case 'M':
			decimal = 22 * pow(B, p);
			break;
		case 'N':
			decimal = 23 * pow(B, p);
			break;
		case 'O':
			decimal = 24 * pow(B, p);
			break;
		case 'P':
			decimal = 25 * pow(B, p);
			break;
		case 'Q':
			decimal = 26 * pow(B, p);
			break;
		case 'R':
			decimal = 27 * pow(B, p);
			break;
		case 'S':
			decimal = 28 * pow(B, p);
			break;
		case 'T':
			decimal = 29 * pow(B, p);
			break;
		case 'U':
			decimal = 30 * pow(B, p);
			break;
		case 'V':
			decimal = 31 * pow(B, p);
			break;
		case 'W':
			decimal = 32 * pow(B, p);
			break;
		case 'X':
			decimal = 33 * pow(B, p);
			break;
		case 'Y':
			decimal = 34 * pow(B, p);
			break;
		case 'Z':
			decimal = 35 * pow(B, p);
			break;
		}
		sum += decimal;
	}
	cout << sum;
	return 0;
}