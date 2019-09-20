#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    int size = commands.size();
    
    for(int i=0; i<size; ++i){
        vector<int> temp;
        int start = commands[i][0];
        int end = commands[i][1];
        int k = commands[i][2];
        
        for(int j=start-1; j<end; ++j){
            temp.push_back(array[j]);    
        }
        sort(temp.begin(), temp.end());
        answer.push_back(temp[k-1]);
    }
    
    return answer;
}