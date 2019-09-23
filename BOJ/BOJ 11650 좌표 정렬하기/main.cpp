#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b) {
	if (a.first == b.first) {
		return a.second < b.second;
	}
	return a.first < b.first;
}

int main(void) {
	vector<pair<int, int>> coordinates;
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		int x, y;
		scanf("%d %d", &x, &y);
		coordinates.push_back(make_pair(x, y));
	}
	sort(coordinates.begin(), coordinates.end(), comp);
	for (int i = 0; i < n; ++i) {
		printf("%d %d\n", coordinates[i].first, coordinates[i].second);
	}
	return 0;
}