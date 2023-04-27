// 프로그래머스 Lv1 - 둘만의 암호

#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    int flag = 0;

    for(char c : s){
        int copyIndex = index;

        while(copyIndex--){
            c++;
            if(c > 122) c -= 26;

            for(int j = 0; j < skip.size(); j++){
                if(skip[j] == c){
                    flag = 1;
                    break;
                }
            }
            if(flag){
                flag = 0;
                copyIndex++;
            }
        }
        answer += c;
    }
    return answer;
}

int main(){
    string s = "aukks";
    string skip = "wbqd";
    int index = 5;
    cout << solution(s, skip, index);

    return 0;
}