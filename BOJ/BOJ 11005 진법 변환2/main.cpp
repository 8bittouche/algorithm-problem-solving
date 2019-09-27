#include <iostream>
#include <vector>
using namespace std;

vector<char> ans;

void convert(int n, int b) {
	while (n) {
		int r = n % b;
		
		if (r < 10) {
			ans.push_back((char)(r + '0'));
		}
		else {
			ans.push_back((char)(r - 10 + 'A'));
		}
		
		n /= b;
	}
}

int main() {
	int n, b;
	scanf("%d %d", &n, &b);
	
	convert(n, b);
	int ans_size = ans.size();
	for (int i = ans_size - 1; i >= 0; --i) {
		printf("%c", ans[i]);
	}
	printf("\n");

	return 0;
}