#include <stdio.h>
#include <cstring>
#include <deque>
using namespace std;
int main() {
	deque<int> dq;
	int n;
	scanf("%d", &n);
	while (n--) {
		char cmd[20];
		scanf(" %s", cmd);
		if (!strcmp(cmd, "push_back")) {
			int x;
			scanf(" %d", &x);
			dq.push_back(x);
		}
		else if (!strcmp(cmd, "push_front")) {
			int x;
			scanf(" %d", &x);
			dq.push_front(x);
		}
		else if (!strcmp(cmd, "front")) {
			if (dq.empty()) {
				printf("%d\n", -1);
			}
			else {
				printf("%d\n", dq.front());
			}
		}
		else if (!strcmp(cmd, "back")) {
			if (dq.empty()) {
				printf("%d\n", -1);
			}
			else {
				printf("%d\n", dq.back());
			}
		}
		else if (!strcmp(cmd, "pop_front")) {
			if (dq.empty()) {
				printf("%d\n", -1);
			}
			else {
				printf("%d\n", dq.front());
				dq.pop_front();
			}
		}
		else if (!strcmp(cmd, "pop_back")) {
			if (dq.empty()) {
				printf("%d\n", -1);
			}
			else {
				printf("%d\n", dq.back());
				dq.pop_back();
			}
		}
		else if (!strcmp(cmd, "size")) {
			if (dq.empty()) {
				printf("%d\n", 0);
			}
			else {
				printf("%d\n", dq.size());
			}
		}
		else if (!strcmp(cmd, "empty")) {
			if (dq.empty()) {
				printf("%d\n", 1);
			}
			else {
				printf("%d\n", 0);
			}
		}
	}

	return 0;
}