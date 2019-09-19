#include <stdio.h>
using namespace std;
int d[11] = {0,};
int main() {

	d[1] = 1;
	d[2] = 2;
	d[3] = 4;
	for (int i = 4; i < 11; ++i) {
		d[i] = d[i - 1] + d[i - 2] + d[i - 3];
	}

	int tc;
	scanf("%d", &tc);
	while (tc--) {
		int n;
		scanf(" %d", &n);
		printf("%d\n", d[n]);
	}
}