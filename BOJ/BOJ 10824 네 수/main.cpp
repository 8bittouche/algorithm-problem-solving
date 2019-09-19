#include <stdio.h>
#include <string>
using namespace std;
int main() {
	int a, b, c, d;
	
	scanf("%d %d %d %d", &a, &b, &c, &d);
	string s1 = to_string(a) + to_string(b);
	string s2 = to_string(c) + to_string(d);
	long long d1 = stoll(s1);
	long long d2 = stoll(s2);
	printf("%lld", d1 + d2);

	return 0;
}