#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;

    // 가로 안의 숫자를 전부 nums 벡터에 저장
    vector<vector<int>> nums(501);
    int count = 0;
    for (int i = 1; i < s.size() - 1; i++) {
        string stemp = "";
        if (s[i] == '{') {
            while (true) {
                i++;
                if (s[i] == '}')
                    break;
                if (s[i] == ',') {
                    nums[count].push_back(stoi(stemp));
                    stemp = "";
                    continue;
                }
                stemp += s[i];
            }
            nums[count].push_back(stoi(stemp));
            count++;
        }
    }

    // nums 벡터에서 가장 적은 개수가 저장된 순서로 불러와 중복된 숫자 없이 answer에 추가
    bool check[100001] = { false, };
    int flag = 1;
    while (flag <= count) {
        for(int i = 0; i < count; i++){
            if(nums[i].size() == flag){
                for(int j = 0; j < nums[i].size(); j++){
                    if(check[nums[i][j]] == false){
                        check[nums[i][j]] = true;
                        answer.push_back(nums[i][j]);
                        flag++;
                        break;
                    }
                }
                break;
            }
        }
    }

    for (int i = 0; i < answer.size(); i++)
        cout << answer[i] << " ";
    return answer;
}

int main() {
    string s = "{{1,2,3},{2,1},{1,2,4,3},{2}}";
    solution(s);
    return 0;
}