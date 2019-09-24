#include <iostream>
#include <queue>
using namespace std;

int n, m, v;
int graph[1001][1001];
int visited[1001];

void dfs(int x) {
	printf("%d ", x);
	visited[x] = 1;

	for (int i = 1; i <= n; ++i) {
		if (graph[x][i] == 1 && visited[i] != 1) {
			dfs(i);
		}
	}
}

void bfs(int x) {
	queue<int> q;
	q.push(x);
	visited[x] = 2;
	printf("%d ", x);

	while (!q.empty()) {
		int front = q.front();
		q.pop();

		for (int i = 1; i <= n; ++i) {
			if (graph[front][i] == 1 && visited[i] != 2) {
				q.push(i);
				visited[i] = 2;
				printf("%d ", i);
			}
		}
	}
}

int main() {
	scanf("%d %d %d", &n, &m, &v);
	for (int i = 0; i < m; ++i) {
		int a, b;
		scanf("%d %d", &a, &b);
		graph[a][b] = 1;
		graph[b][a] = 1;
	}

	dfs(v);
	printf("\n");
	bfs(v);

	return 0;
}