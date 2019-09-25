#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <string.h>
using namespace std;


vector<int> adj[20001];
int visited[20001];

void bfs(int x) {
	queue<int> q;
	q.push(x);
	visited[x] = 1;
	
	while (!q.empty()) {
		int front = q.front();
		q.pop();

		for (int i = 0; i < adj[front].size(); ++i) {
			int a = adj[front][i];
			if (!visited[a]) {
				q.push(a);
				if (visited[front] == 1) {
					visited[a] = 2;
				}
				else {
					visited[a] = 1;
				}
			}
		}
	}
}

bool checkBipartite(int v) {
	for (int i = 1; i <= v; ++i) {
		int adj_size = adj[i].size();
		int color = visited[i];
		for (int j = 0; j < adj_size; ++j) {
			if (color == visited[adj[i][j]]) {
				return false;
			}
		}
	}
	return true;
}

int main() {
	int k;
	scanf("%d", &k);
	while (k--) {
		memset(adj, 0, sizeof(adj));
		memset(visited, 0, sizeof(visited));

		int v, e;
		scanf("%d %d", &v, &e);
		for (int i = 0; i < e; ++i) {
			int u, v;
			scanf("%d %d", &u, &v);
			adj[u].push_back(v);
			adj[v].push_back(u);
		}

		for (int i = 1; i <= v; ++i) {
			if (!visited[i]) {
				bfs(i);
			}
		}

		if (checkBipartite(v)) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}

	return 0;
}