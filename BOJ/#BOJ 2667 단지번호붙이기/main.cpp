#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
vector<int> ans;
int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 };
bool visited[26][26];
int mp[26][26];

int cnt = 0;
void dfs(int x, int y) {
	visited[x][y] = 1;
	cnt++;

	for (int i = 0; i < 4; ++i) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
		if (mp[nx][ny]==1 && !visited[nx][ny]) {
			dfs(nx, ny);
		}
	}
}

int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			scanf("%1d", &mp[i][j]);
		}
	}
	
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (mp[i][j] == 1 && !visited[i][j]) {
				cnt = 0;
				dfs(i, j);
				ans.push_back(cnt);
			}
		}
	}

	int ans_size = ans.size();
	printf("%d\n", ans_size);
	sort(ans.begin(), ans.end());
	for (int i = 0; i < ans_size; ++i) {
		printf("%d\n", ans[i]);
	}

	return 0;
}