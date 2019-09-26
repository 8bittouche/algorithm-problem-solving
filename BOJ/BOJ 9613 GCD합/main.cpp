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

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		int a[101];
		long long sum = 0;
		scanf("%d", &n);
		for (int i = 0; i < n; ++i) {
			scanf(" %d", &a[i]);
		}
		for (int i = 0; i < n-1; ++i) {
			for (int j = i + 1; j < n; j++) {
				sum += gcd(a[i], a[j]);
			}
		}

		printf("%lld\n", sum);
	}

	return 0;
}