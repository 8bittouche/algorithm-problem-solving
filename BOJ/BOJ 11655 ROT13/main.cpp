#include <stdio.h>
#include <cstring>
using namespace std;
int main() {
	char s[105];
	fgets(s, 102, stdin);
	int len = strlen(s);
	for (int i = 0; i < len; ++i) {
		char x = s[i];
		if (('a' <= x && x <= 'z')) {
			if (x + 13 > 'z') {
				printf("%c", (x + 13 - ('a'+26))+'a');
			}
			else {
				printf("%c", x+13);
			}
		}
		else if (('A' <= x && x <= 'Z')) {
			if (x + 13 > 'Z') {
				printf("%c", (x + 13 - ('A' + 26)) + 'A');
			}
			else {
				printf("%c", x + 13);
			}
		}
		else {
			printf("%c", x);
		}
	}
	
	return 0;
}