#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> a = {1,2,3,4,5};
vector<int> b = {2,1,2,3,2,4,2,5};
vector<int> c = {3,3,1,1,2,2,4,4,5,5};

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int size = answers.size();
    vector<int> abc(3);
    
    for(int i=0; i<size; ++i){
        int ans = answers[i];
        if(a[i%5] == ans){
            abc[0]++;
        }
        if(b[i%8] == ans){
            abc[1]++;
        }
        if(c[i%10] == ans){
            abc[2]++;
        }
    }
    
    int max = *max_element(abc.begin(), abc.end());
    for(int i=0; i<3; ++i){
        if(abc[i] == max){
            answer.push_back(i+1);
        }
    }
    
    return answer;
}