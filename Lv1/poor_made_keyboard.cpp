#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;

    for(int i = 0; i < targets.size(); i++){
        answer.push_back(0);

        for(int j = 0; j < targets[i].size(); j++){
            char target = targets[i][j];
            int count = 101, flag = 1;
            // count를 101로 해서 밑에서 min으로 비교 가능

            for(int k = 0; k < keymap.size(); k++){
                for(int l = 0; l < keymap[k].size(); l++){
                    if(keymap[k][l] == target){
                        count = min(count, l + 1);
                        flag = 0;
                        break;
                    }
                }
            }
            if(flag){
                answer[i] = -1;
                break;
            }
            answer[i] += count;
        }
    }
    return answer;
}

int main(){
    vector<string> keymap = { "AA" };
    vector<string> targets = { "B" };
    vector<int> answer = solution(keymap, targets);
    for(auto x : answer)
        cout << x << " ";
    return 0;
}