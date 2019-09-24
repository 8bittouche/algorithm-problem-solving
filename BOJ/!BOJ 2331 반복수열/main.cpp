#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <cmath>
using namespace std;

vector<int> s;
map<int, int> mp;
int A, P;

int calcElement(int x) {
	int ret = 0;
	while (1) {
		ret += pow(x % 10, P);
		x /= 10;
		if (x % 10 == 0) {
			break;
		}
	}
	return ret;
}

int main() {
	scanf("%d %d", &A, &P);
	s.push_back(A);
	mp[A] = 1;
	for (int i = 1; ; ++i) {
		int a = calcElement(s[i - 1]);
		if (mp.find(a) == mp.end()) {
			mp[a] = 1;
		}
		else {
			mp[a] += 1;
			break;
		}
		s.push_back(a);
	}
	
	int ans = 0;
	int s_size = s.size();
	for (int i = 0; i < s_size; ++i) {
		if (mp[s[i]] == 2) {
			break;
		}
		ans++;
	}
	printf("%d\n", ans);
	
	return 0;
}