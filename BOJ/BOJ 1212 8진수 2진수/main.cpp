#include <iostream>
#include <string>
using namespace std;

string eight[8] = {"000", "001", "010", "011", "100", "101", "110", "111"};

int main() {
	string s;
	cin >> s;
	
	int len = s.length();
	if (len == 1 && s[0] == '0') {
		cout << "0";
		return 0;
	}

	if (s[0] == '1') {
		cout << "1";
	}
	else if (s[0] == '2') {
		cout << "10";
	}
	else if (s[0] == '3') {
		cout << "11";
	}
	else {
		cout << eight[s[0]-'0'];
	}

	
	for (int i = 1; i < len; ++i) {
		cout << eight[s[i]-'0'];
	}
	
	return 0;
}
