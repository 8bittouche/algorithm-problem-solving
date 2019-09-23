#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

vector<vector<string>> mat;
vector<vector<string>> temp;

void clockOneStep(int n, int d) {
	for (int i = 0; i < n - 1; ++i) {
		temp[i + 1][n - 1 - d] = mat[i][n - 1 - d];
	}
	for (int j = 1; j < n; ++j) {
		temp[n - 1 - d][j - 1] = mat[n - 1 - d][j];
	}
	for (int i = 1; i < n; ++i) {
		temp[i - 1][0] = mat[i][0];
	}
	for (int j = 0; j < n - 1; ++j) {
		temp[0][j + 1] = mat[0][j];
	}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (i == 0 || j == 0 || i == n - 1 - d || j == n - 1 - d) {
				mat[i][j] = temp[i][j];
			}
		}
	}
}

void unClockOneStep(int n, int d) {
	for (int i = 1; i < n; ++i) {
		temp[i - 1][n - 1 - d] = mat[i][n - 1 - d];
	}
	for (int j = 0; j < n - 1; ++j) {
		temp[n - 1 - d][j + 1] = mat[n - 1 - d][j];
	}
	for (int i = 0; i < n - 1; ++i) {
		temp[i + 1][0] = mat[i][0];
	}
	for (int j = 1; j < n; ++j) {
		temp[0][j - 1] = mat[0][j];
	}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (i == 0 || j == 0 || i == n - 1 - d || j == n - 1 - d) {
				mat[i][j] = temp[i][j];
			}
		}
	}
}

void rotateMatrix(int n, int w, int d) {
	if ((n - 1 - d) < (n / 2)) {
		return;
	}

	int repeatNum = 4 * (n - 2 * d - 1);
	int rotateCnt = (repeatNum > 0) ? (abs(w) % repeatNum) : 0;
	if (w > 0) {
		for (int i = 0; i < rotateCnt; ++i) {
			clockOneStep(n, d);
		}
	}
	else {
		for (int i = 0; i < rotateCnt; ++i) {
			unClockOneStep(n, d);
		}
	}

	rotateMatrix(n, -w, d + 1);
}

void printMatrix(int n) {
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (j < n - 1) {
				printf("%s ", mat[i][j].c_str());
			}
			else {
				printf("%s\n", mat[i][j].c_str());
			}
		}
	}
}

int main() {
	int n, w;
	scanf("%d %d", &n, &w);
	for (int i = 0; i < n; ++i) {
		vector<string> x;
		for (int j = 0; j < n; ++j) {
			string s;
			cin >> s;
			x.push_back(s);
		}
		mat.push_back(x);
		temp.push_back(x);
	}

	rotateMatrix(n, w, 0);
	printMatrix(n);

	return 0;
}