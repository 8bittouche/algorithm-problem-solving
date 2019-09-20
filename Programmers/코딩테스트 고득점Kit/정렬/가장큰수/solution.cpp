#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int comp(const string& s1, const string& s2){
    if(s1+s2 > s2+s1){
        return 1;
    }
    return 0;
}

string solution(vector<int> numbers) {
    string answer = "";
    int size = numbers.size();
    vector<string> stringNum;
    for(int i=0; i<size; ++i){
        stringNum.push_back(to_string(numbers[i]));
    }
    sort(stringNum.begin(), stringNum.end(), comp);
    for(int i=0; i<size; ++i){
        answer += stringNum[i];
    }
    if(answer[0] == '0'){
        answer = "0";
    }
    return answer;
}