#include <iostream>
#include <string>

using namespace std;

string solution(string s) {
    string answer = "";

    answer += toupper(s[0]);
    for(int i = 1; i < s.size(); i++){
        if(s[i - 1] == ' ')
            answer += toupper(s[i]);
        else
            answer += tolower(s[i]);
    }
    cout << answer;
    return answer;
}

int main(){
    string s = "3people unFollowed me";
    solution(s);

    return 0;
}