#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, k;
vector<int> numbers;
int main() {
	scanf("%d %d", &n, &k);
	for (int i = 0; i < n; ++i) {
		int x;
		scanf("%d", &x);
		numbers.push_back(x);
	}
	nth_element(numbers.begin(), numbers.begin() + k - 1, numbers.begin() + n);
	printf("%d", numbers[k-1]);

	return 0;
}