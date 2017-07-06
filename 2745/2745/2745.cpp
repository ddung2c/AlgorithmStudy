//B진법 수 N이 주어진다. 이 수를 10진법으로 바꿔 출력하는 프로그램을 작성.
//10진법을 넘어가는 진법은 숫자로 표시할 수 없는 자리가 있다. 
//A:10, B:11, ... F:16, ..., Y:34, Z:35
//ZZZZZZ,, 36진법 2<=B<=36
//B진법 수 N을 10진법으로 바꾸면 항상 10억보다 작거나 같다. 

// 1차원 배열 동적 할당 + char의 길이!!
#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main() {
	int B;
	char *N = new char;  //동적 할당

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