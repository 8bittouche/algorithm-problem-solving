#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	vector<int> numbers;
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		int x;
		scanf("%d", &x);
		numbers.push_back(x);
	}
	sort(numbers.begin(), numbers.end());
	for (int i = 0; i < n; ++i) {
		printf("%d\n", numbers[i]);
	}
	return 0;
}