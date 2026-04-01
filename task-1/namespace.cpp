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