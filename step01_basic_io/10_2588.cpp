#include <iostream>
#include <string>
using namespace std;

int main() {
	int x;
	string y;
	cin >> x;
	cin >> y;
	cout << x * (y[2] - '0') << endl;
	cout << x * (y[1] - '0') << endl;
	cout << x * (y[0] - '0') << endl;
	cout << x * stoi(y);
}