#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
vector<pair<int, int>> a;
int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; ++i) {
		int x;
		scanf("%d", &x);
		a.push_back(make_pair(x, i));
	}

	sort(a.begin(), a.end());
	int ans = 0;
	for (int i = 0; i < n; ++i) {
		int diff = a[i].second - (i + 1);
		if (diff > 0) {
			if (diff > ans) {
				ans = diff;
			}
		}
	}
	printf("%d", ans+1);

	return 0;
}