#include <string>
#include <vector>
#include <stdio.h>
using namespace std;

int answer = 0;

void dfs(int depth, int sum, vector<int> numbers, int target, int size){
    if(depth == size){
        if(sum == target){
            answer++;
        }
        return;
    }
    dfs(depth+1, sum+numbers[depth], numbers, target, size);
    dfs(depth+1, sum-numbers[depth], numbers, target, size);
}

int solution(vector<int> numbers, int target) {
    dfs(0, 0, numbers, target, numbers.size());
    
    return answer;
}