#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n, m, ans=0;
vector<int> adj[1001];
int visited[1001];

void dfs(int x) {
	visited[x] = 1;

	for (int i = 0; i < adj[x].size(); ++i) {
		int nx = adj[x][i];
		if (!visited[nx]) {
			dfs(nx);
		}
	}
}

int main() {
	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; ++i) {
		int a, b;
		scanf("%d %d", &a, &b);
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	for (int i = 1; i <= n; i++) {
		sort(adj[i].begin(), adj[i].end());
	}

	for (int i = 1; i <= n; ++i) {
		if (!visited[i]) {
			dfs(i);
			ans++;
		}
	}
	
	printf("%d\n", ans);

	return 0;
}