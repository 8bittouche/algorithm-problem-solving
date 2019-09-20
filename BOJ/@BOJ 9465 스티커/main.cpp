#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int comp(pair<long long, pair<int, int>> v1, pair<long long, pair<int, int>> v2) {
	return v1.first > v2.first;
}

int dx[4] = { 1, 0 , -1, 0 };
int dy[4] = { 0, 1 , 0, -1 };
int main() {
	int tc;
	scanf("%d", &tc);
	while (tc--) {
		long long ans = 0;
		int deleteCnt = 0;
		long long score[2][100001];
		vector<pair<long long, pair<int, int>>> scoreInfo;

		int n;
		scanf(" %d", &n);
		for (int r = 0; r < 2; ++r) {
			for (int c = 0; c < n; ++c) {
				int x;
				scanf(" %d", &x);
				score[r][c] = x;
				scoreInfo.push_back(make_pair(x, make_pair(r, c)));
			}
		}
		sort(scoreInfo.begin(), scoreInfo.end(), comp);
		for (vector<pair<long long, pair<int, int>>>::iterator it = scoreInfo.begin(); it != scoreInfo.end(); ++it) {
			int x = it->second.first;
			int y = it->second.second;
			int sc = score[x][y];
			if (sc != 0) {
				ans += sc;
				deleteCnt++;

				for (int i = 0; i < 4; ++i) {
					int nx = it->second.first + dx[i];
					int ny = it->second.second + dy[i];
					if (nx < 0 || nx >= 2 || ny < 0 || ny >= n) continue;
					if (score[nx][ny] != 0) {
						score[nx][ny] = 0;
						deleteCnt++;
					}
				}
			}
			if (deleteCnt == 2 * n) break;
		}
		printf("%lld\n", ans);
	}
}