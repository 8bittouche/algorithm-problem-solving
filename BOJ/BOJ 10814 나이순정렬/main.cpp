#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

struct userInfo {
	int age;
	string name;
	int joinOrder;

	userInfo(int userAge, string userName, int order) : age(userAge), name(userName), joinOrder(order) {}
};

bool comp(userInfo a, userInfo b) {
	if (a.age == b.age) {
		return a.joinOrder < b.joinOrder;
	}
	return a.age < b.age;
}

int main(void) {
	vector<userInfo> users;
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		int age;
		string name;
		cin >> age >> name;

		struct userInfo ui(age, name, i);
		users.push_back(ui);
	}
	sort(users.begin(), users.end(), comp);
	for (int i = 0; i < n; ++i) {
		printf("%d %s\n", users[i].age, users[i].name.c_str());
	}
	return 0;
}