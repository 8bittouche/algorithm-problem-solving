#include <stdio.h>
#include <cstring>
using namespace std;
int main() {
	char s[105];
	while (fgets(s, 102, stdin)) {
		int u = 0, l = 0, d = 0, e = 0;
		int len = strlen(s);
		for (int i = 0; i < len; ++i) {
			char x = s[i];
			if (x == ' ') {
				e++;
				continue;
			}
			else if ('a' <= x && x <= 'z') {
				l++;
				continue;
			}
			else if ('A' <= x && x <= 'Z') {
				u++;
				continue;
			}
			else if ('0' <= x && x <= '9') {
				d++;
				continue;
			}
		}
		printf("%d %d %d %d\n", l, u, d, e);
	}


	return 0;
}