#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> targets)
{
    int answer = 0, idx = 0;
    sort(targets.begin(), targets.end());

    while(idx < targets.size()){
        int end = targets[idx++][1];
        answer++;

        //end보다 해당 타겟의 s가 작다면 밀어준다
        while(idx < targets.size() && targets[idx][0] < end){
            // 해당 타깃이 end를 설정해 놓은 타겟보다 end가 작을 때 갱신
            if(targets[idx][1] < end)
                end = targets[idx][1];
            idx++;
        }
    }
    return answer;
}

int main(){
    vector<vector<int>> targets = {{4,5},{4,8},{10,14},{11,13},{5,12},{3,7},{1,4}};
    cout << solution(targets);

    return 0;
}