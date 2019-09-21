#include <string>
#include <vector>
#include <map>
using namespace std;

map<string, int> mp;
string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    
    for(vector<string>::iterator it=participant.begin(); it!=participant.end(); ++it){
        string name = *it;
        if(mp.find(name)==mp.end()){
            mp.insert(make_pair(name, 1));    
        }
        else{
            mp.find(name)->second++;
        }
    }
        
    for(vector<string>::iterator it=completion.begin(); it!=completion.end(); ++it){
        string name = *it;
        mp.find(name)->second--;
    }
    
    for(map<string, int>::iterator it=mp.begin(); it!=mp.end(); ++it){
       if(it->second > 0){
           answer += it->first;
       }
    }
    
    return answer;
}