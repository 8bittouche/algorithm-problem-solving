#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

struct studentInfo {
	string name;
	int language;
	int english;
	int math;

	studentInfo(string name, int langScore, int engScore, int matScore) : name(name), language(langScore), english(engScore), math(matScore) {}
};

bool comp(studentInfo a, studentInfo b) {
	if (a.language == b.language) {
		if (a.english == b.english) {
			if (a.math == b.math) {
				return a.name < b.name;
			}
			return a.math > b.math;
		}
		return a.english < b.english;
	}
	return a.language > b.language;
}

int main(void) {
	vector<studentInfo> students;
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		string name;
		int lang;
		int eng;
		int math;
		cin >> name >> lang >> eng >> math;

		struct studentInfo si(name, lang, eng, math);
		students.push_back(si);
	}
	sort(students.begin(), students.end(), comp);
	for (int i = 0; i < n; ++i) {
		printf("%s\n", students[i].name.c_str());
	}
	return 0;
}