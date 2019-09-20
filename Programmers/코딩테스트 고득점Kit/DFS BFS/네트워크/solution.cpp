#include <string>
#include <vector>

using namespace std;

int total=0;
int v[201];
void dfs(int x, vector<vector<int>> &computers){
    v[x] = 1;
    for(int i=0; i<total; ++i){
        if(computers[x][i]==1 && v[i]==0){
            dfs(i, computers);
        }    
    }
}

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    total = n;
    for(int i=0; i<total; ++i){
        if(v[i]==0){
            dfs(i, computers);
            answer++;
        }
    }
    return answer;
}