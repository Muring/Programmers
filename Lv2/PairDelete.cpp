#include <iostream>
#include<string>
#include <stack>

using namespace std;

int solution(string s)
{
    int answer = 0;
    if(s.size() % 2 != 0 || s.empty())
        return answer;

    stack<char> stk;
    for(int i = 0; i < s.size(); i++){
        if(stk.empty() || stk.top() != s[i])
            stk.push(s[i]);
        else
            stk.pop();            
    }

    if(stk.empty())
        answer = 1;

    return answer;
}

int main(){
    string s = "baabaa";
    solution(s);
    return 0;
}