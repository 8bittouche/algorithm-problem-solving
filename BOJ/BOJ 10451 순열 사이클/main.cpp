#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

int visited[1001];
int adj[1001];

void dfs(int x) {
	visited[x] = 1;

	if (!visited[adj[x]]) {
		dfs(adj[x]);
	}
}

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		memset(visited, 0, sizeof(visited));
		memset(adj, 0, sizeof(adj));
		int n;
		scanf("%d", &n);
		for (int i = 1; i <= n; ++i) {
			int x;
			scanf(" %d", &x);
			adj[x] = i;
		}

		int cnt = 0;
		for (int i = 1; i <= n; ++i) {
			if (!visited[i]) {
				dfs(i);
				cnt++;
			}
		}

		printf("%d\n", cnt);
	}

	return 0;
}