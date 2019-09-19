#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	string s;
	cin >> s;
	vector<string> vs;
	
	int len = s.length();
	for (int i = 0; i < len; ++i) {
		string x = s.substr(i, len);
		vs.push_back(x);
	}

	sort(vs.begin(), vs.end());
	for(vector<string>::iterator it=vs.begin(); it!=vs.end(); ++it){
		printf("%s\n", (*it).c_str());
	}

	return 0;
}