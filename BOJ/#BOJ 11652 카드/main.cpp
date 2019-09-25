#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
vector<long long> cards;

int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		long long x;
		scanf("%lld", &x);
		cards.push_back(x);
	}
	sort(cards.begin(), cards.end());

	int cnt = 1;
	int max = 1;
	long long ans = cards[0];
	for (int i = 1; i < n; ++i) {
		if (cards[i] == cards[i - 1]) {
			cnt++;
		}
		else {
			cnt = 1;
		}
		if (max < cnt) {
			max = cnt;
			ans = cards[i];
		}
	}
	printf("%lld", ans);

	return 0;
}