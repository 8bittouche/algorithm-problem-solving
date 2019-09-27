#include <iostream>
#include <string.h>
using namespace std;

int order[100001];
int startNode[100001];
int a[100001];

int dfs(int x, int cnt, int& start) {
	if (order[x] != 0) {
		if (startNode[x] != start) {
			return 0;
		}
		return cnt - order[x];
	}

	order[x] = cnt;
	startNode[x] = start;
	return dfs(a[x], cnt + 1, start);
}

int main() {
	int t;
	scanf("%d", &t);
	
	while (t--) {
		memset(a, 0, sizeof(a));
		memset(order, 0, sizeof(order));
		memset(startNode, 0, sizeof(startNode));

		int n, ans=0;
		scanf("%d", &n);
		
		for (int i = 1; i <= n; ++i) {
			scanf(" %d", &a[i]);
		}

		for (int i = 1; i <= n; ++i) {
			if (order[i] == 0) {
				ans += dfs(i, 1, i);
			}
		}
		
		printf("%d\n", n-ans);
	}

	return 0;
}