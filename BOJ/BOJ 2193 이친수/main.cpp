#include <stdio.h>
using namespace std;

long long ans = 0;
int n;
long long d[91][2];
int main() {
	scanf("%d", &n);
	d[1][1] = 1;
	d[2][0] = 1;
	for (int i = 3; i <= n; ++i) {
		d[i][0] = d[i - 1][0] + d[i - 1][1];
		d[i][1] = d[i - 1][0];
	}
	ans = d[n][0] + d[n][1];
	printf("%lld", ans);
}