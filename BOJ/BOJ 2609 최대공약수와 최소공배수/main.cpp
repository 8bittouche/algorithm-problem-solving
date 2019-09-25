#include <iostream>
using namespace std;

int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	else {
		return gcd(b, a % b);
	}
}

int lcd(int a, int b) {
	return a * b / gcd(a, b);
}

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n", gcd(a, b));
	printf("%d\n", lcd(a, b));

	return 0;
}