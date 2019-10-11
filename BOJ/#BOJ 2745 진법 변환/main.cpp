// sol 1
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string n;
	int b;
	cin >> n >> b;
	
	int ans = 0;
	int k=1;
	int len = n.length();
	reverse(n.begin(), n.end());
	for (int i = 0; i < len; ++i) {
		char x = n[i];
		int ix;
		
		if ('0' <= x && x <= '9') {
			ix = x - '0';
		}
		else {
			ix = x - 'A' + 10;
		}

		ans += ix * k;
		k *= b;
	}

	printf("%d\n", ans);

	return 0;
}




// sol 2
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	int ans = 0;
//	string s;
//	int b;
//
//	cin >> s >> b;
//
//	for (int i = 0; i < s.size(); i++) {
//		if ('0' <= s[i] && s[i] <= '9') {
//			ans = ans * b + (s[i] - '0');
//		}
//		else {
//			ans = ans * b + (s[i] - 'A' + 10);
//		}
//	}
//
//	cout << ans << '\n';
//
//	return 0;
//
//}