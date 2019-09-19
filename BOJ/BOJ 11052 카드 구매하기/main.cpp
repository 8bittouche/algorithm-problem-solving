#include <stdio.h>
using namespace std;
int p[1001] = {0,};
int d[1001] = {0,};
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; ++i) {
		scanf(" %d", &p[i]);
	}
	d[1] = p[1];
	for (int i = 2; i <= n; ++i) {
		int max = p[i];
		
		for (int j = 1; j < n; ++j) {
			if (i > j) {
				int tmp = d[i - j] + p[j];
				if (max < tmp) max = tmp;
			}
		}
		
		d[i] = max;
	}
	
	printf("%d", d[n]);
}