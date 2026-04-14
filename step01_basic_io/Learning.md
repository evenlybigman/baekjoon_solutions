### 05_1008

A / B

``` C++
//setpreicision 함수를 이용한 풀이
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double x, y;
	cin >> x >> y;
	cout << fixed << setprecision(10) << x / y;
}
```

```c++
//cout.precision을 이용한 풀이
#include <iostream>
using namespace std;

int main() {
	double x, y;
	cin >> x >> y;
	cout.precision(10);
	cout << x / y;
}
```

이 문제는 x와 y를 입력 받아 x / y의 값을 출력하는 문제입니다. 상대오차가 10^-9이하여야 한다고 했으므로

절대 오차는 실제 값 - 나온 값을 의미하고 상대 오차는 절대오차 / 실제값 입니다. 상대오차가 10^-9 이하여야하므로 소수점을 10자리까지 출력하면 안전. (9자리는 반올림시 오류 가능성 존재) 

### 10_2588

곱셈

``` c++
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
```

![img](https://www.acmicpc.net/upload/images/f5NhGHVLM4Ix74DtJrwfC97KepPl27s%20(1).png)

배운 것

- stoi(string x) 문자열에 있는 숫자 문자(ASKII)를 숫자로 변환
-  -'0' string 변수 안에 있는 숫자는 문자로 입력 받기 때문에 아스키 코드로 받아져 있다. 때문에 '0'을 빼주면 실제 값으로 받을 수 있다.  

### 11_11382

꼬마 정민

``` c++
#include <iostream>
using namespace std;

int main() {
	long long x, y, z;
	long long sum = 0;
	cin >> x >> y >> z;
	sum = x + y + z;
	cout << sum;
}
```

1<= a,b,c <= 10^12 라는 조건을 만족시키기 위해서 a,b,c의 값이 최대 1조이기 때문에 int 형은 공간이 부족하다. 때문에 long long 타입으로 선언한다.

int = 4바이트 = 2^32의 수 저장 가능

long long = 8바이트 = 2^64의 수 저장 가능

(unsigned) = 양수만 저장