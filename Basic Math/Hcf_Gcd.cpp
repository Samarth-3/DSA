// C++ program to find HCF of two
// numbers iteratively.
#include <iostream>
using namespace std;

int hcf(int a, int b)
{
	if (a == 0)
		return b;
	else if (b == 0)
		return a;
	while (a != b) {
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return a;
}

// Driver code
int main()
{
	int a = 60, b = 96;
	cout << hcf(a, b) << endl;
	return 0;
}

// This code is contributed by shubhamsingh10
