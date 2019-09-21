#include <string>
#include <vector>

using namespace std;

bool isPrefix(string a, string b){
    int a_len = a.length();
    int b_len = b.length();
    
    if(a_len < b_len){
        for(int i=0; i<a_len; ++i){
            if(a[i] != b[i]){
                return false;
            }
        }
    }else{
        for(int i=0; i<b_len; ++i){
            if(a[i] != b[i]){
                return false;
            }
        }
    }
    return true;
}

bool solution(vector<string> phone_book) {
    bool answer = true;
    int book_size = phone_book.size();
    for(int i=0; i<book_size; ++i){
        for(int j=i+1; j<book_size; ++j){
            if(isPrefix(phone_book[i], phone_book[j])){
                return false;
            }
        }
    }
    
    return answer;
}