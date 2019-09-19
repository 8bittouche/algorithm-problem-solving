#include <stdio.h>
#include <cstring>
using namespace std;
int main() {
	char s[101];
	char alphabet[30] = {0,};
	scanf("%s", s);
	int len = strlen(s);
	for (int i = 0; i < len; ++i) {
		alphabet[s[i] - 'a']++;
	}
	for (int i = 0; i < 26; ++i) {
		printf("%d ", alphabet[i]);
	}


	return 0;
}