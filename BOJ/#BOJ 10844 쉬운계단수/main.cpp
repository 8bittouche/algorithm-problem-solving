#include <stdio.h>
using namespace std;

long long ans = 0;
long long mod = 1000000000;
int n;
//void func(int depth, int num){
//	if (depth == n) { 
//		ans++;
//		return; 
//	}
//	if (1 <= num && num <= 8) {
//		func(depth + 1, num - 1);
//		func(depth + 1, num + 1);
//	}
//	else if (num == 0) {
//		func(depth + 1, num + 1);
//	}
//	else if (num == 9) {
//		func(depth + 1, num - 1);
//	}
//}

long long d[105][10];
int main() {
	scanf("%d", &n);

	/*for (int i = 1; i <= 9; ++i) {
		func(1, i);
	}*/
	d[1][0] = 0;
	for (int i = 1; i <= 9; ++i) {
		d[1][i] = 1;
	}
	for (int i = 2; i <= n; ++i) {
		for (int j = 0; j <= 9; ++j) {
			if (j == 0) {
				d[i][j] = d[i - 1][j + 1];
			}
			else if (j == 9) {
				d[i][j] = d[i - 1][j - 1];
			}
			else {
				d[i][j] = d[i - 1][j + 1] + d[i - 1][j - 1];
			}
			d[i][j] %= mod;
		}
	}
	
	for (int i = 0; i <= 9; ++i) {
		ans += d[n][i];
	}
	printf("%lld", ans%mod);
}