// 프로그래머스 Lv1 - 카드뭉치

#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "";
    int j = 0, k = 0, flag = 0;

    for(int i = 0 ; i < goal.size(); i++){
        if(goal[i] == cards1[j]) j++;
        else if(goal[i] == cards2[k]) k++;
        else{
            flag = 1;
            break;
        }
    }
    if(flag) answer = "No";
    else answer = "Yes";
    
    return answer;
}

int main(){
    vector<string> cards1 = { "i", "drink", "water" };
    vector<string> cards2 = { "want", "to" };
    vector<string> goal = { "i", "want", "to", "drink", "water" };
    cout << solution(cards1, cards2, goal);

    return 0;
}