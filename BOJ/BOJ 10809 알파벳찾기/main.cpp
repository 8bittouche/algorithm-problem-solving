#include <stdio.h>
#include <cstring>
using namespace std;
int main() {
	char s[101];
	char alphabet[30];
	memset(alphabet, -1, 26);
	scanf("%s", s);
	int len = strlen(s);
	for (int i = 0; i < len; ++i) {
		if (alphabet[s[i] - 'a'] == -1) {
			alphabet[s[i] - 'a'] = i;
		};
	}
	for (int i = 0; i < 26; ++i) {
		printf("%d ", alphabet[i]);
	}


	return 0;
}