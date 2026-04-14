#include <iostream>
#include <string>
using namespace std;

int main() {
	//자리수 n 
	//a의 자릿수와 b의 자리수 파악
	//a를 b의 10^0승부터 곱해서 10^ n까지 곱함 
	//연산이 끝났으면 각 자리수 마다 더함
	int x;
	string y;
	cin >> x;
	cin >> y;
	cout << x * (y[2] - '0') << endl;
	cout << x * (y[1] - '0') << endl;
	cout << x * (y[0] - '0') << endl;
	cout << x * stoi(y);
}