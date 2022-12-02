#include <string>
#include <vector>
#include <stack>
#include <iostream>

using namespace std;

int solution(string s) {
    int answer = 0;

    stack<char> stk;
    for(int i = 0; i < s.size(); i++){
        for(int j = 0; j < s.size(); j++){
            if(s[j] == '(' || s[j] == '{' ||s[j] == '[' )
                stk.push(s[j]);
            else{
                if(!stk.empty() && stk.top() == '(' && s[j] == ')')
                    stk.pop();
                else if(!stk.empty() && stk.top() == '{' && s[j] == '}')
                    stk.pop();
                else if(!stk.empty() && stk.top() == '[' && s[j] == ']')
                    stk.pop();
                else
                    stk.push(s[j]);
            }
            if(stk.empty())
                answer++;
        }
        char temp = s.front();
        s.erase(s.begin());
        s.push_back(temp);
    }
    cout << answer;
    
    return answer;
}

int main(){
    string s = "}]()[{";
    solution(s);
    return 0;
}