### 01_2557

Hello World

``` c++
#include <iostream>
using namespace std;

int main() {
	cout << "Hello World!";
}
```

### 02_1000

 A + B

``` c++
#include <iostream>
using namespace std;

int main() {
	int x, y;
	cin >> x >> y;
	cout << x + y;
}
```

### 03_1001

A - B

``` c++
#include <iostream>
using namespace std;

int main() {
	int x, y;
	cin >> x >> y;
	cout << x - y;
}
```

### 04_10998

A x B

``` c++
#include <iostream>
using namespace std;

int main() {
	int x, y;
	cin >> x >> y;
	cout << x * y;
}
```

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





