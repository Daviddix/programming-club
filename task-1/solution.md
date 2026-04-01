# Task 1 Solution

## 1) Mega data type size

The CPU has a maximum addressable width of **2 bytes**.

- 1 byte = 8 bits  
- 2 bytes = (2 x 8 = 16) bits

Since **mega** is defined as the largest data type supported by this CPU, the mega data type contains:

**16 bits**

---

## 2) C++ program demonstrating namespaces

```cpp
#include <iostream>
using namespace std;

namespace IntMath {
	int sum(int a, int b) {
		return a + b;
	}
}

namespace LongMath {
	long sum(long a, long b) {
		return a + b;
	}
}

int main() {
	int intResult = IntMath::sum(10, 20);
	long longResult = LongMath::sum(100000L, 200000L);

	cout << "IntMath::sum(10, 20) = " << intResult << endl;
	cout << "LongMath::sum(100000L, 200000L) = " << longResult << endl;

	return 0;
}
```

---

## 3) Unsigned integer behavior

Given program:

```cpp
#include <iostream>
using namespace std;

int main() {
	unsigned int x = 0;
	x = x - 1;
	cout << x << endl;
	return 0;
}
```

### A. Output

The output is:

```text
4294967295
```

(On systems where `unsigned int` is 32 bits.)

### B. Why this happens

`unsigned int` cannot represent negative values. Unsigned arithmetic wraps around modulo 2^N, where N is the number of bits.

For 32-bit `unsigned int`:

- Range is 0 to (2^32 - 1)
- Starting from `0`, subtracting `1` wraps to the maximum value:

0 - 1 wraps to 2^32 - 1 = 4294967295

So `x` becomes the largest possible 32-bit unsigned value.
