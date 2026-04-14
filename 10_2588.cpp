#include <iostream>
using namespace std;

int digits(int x) { //자리수 리턴
	int counts = 0;
	while (x != 0) {
		x / 10;
		counts++;
	}
	return counts;
}

int main() {
	//자리수 n 
	//a의 자릿수와 b의 자리수 파악
	//a의 10^0 부터 10 ^n승까지 b의 10^0승부터 곱해서 10^ n까지 곱함 
	//연산이 끝났으면 각 자리수 마다 더함
	int a, b, an,bn;
	cin >> a;
	cin >> b;
	for (int i = 0; i < digits(a); i++) {
		
	}
}