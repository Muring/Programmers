#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer;
    map<int, string> map1;
    map<string, int> map2;

    for(int i = 0; i < players.size(); i++){
        map1[i] = players[i];
        map2[players[i]] = i;
    }

    for(int i = 0; i < callings.size(); i++){
        int idx = map2[callings[i]];
        string temp = map1[idx - 1];

        map1[idx - 1] = callings[i];
        map1[idx] = temp;

        map2[callings[i]] = idx - 1;
        map2[temp] = idx;
    }

    for(auto x : map1) answer.push_back(x.second);
    return answer;
}

int main(){
    vector<string> players = {"mumu", "soe", "poe", "kai", "mine"};
    vector<string> callings = {"kai", "kai", "mine", "mine"};
    vector<string> result = solution(players, callings);
    
    for(auto x : result)
        cout << x << endl;

    return 0;
}