#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    map<string, int> m;

    for(int i = 0; i < name.size(); i++)
        m[name[i]] = yearning[i];

    for(auto x : photo){
        int sum = 0;
        for(auto person : x)
            sum += m[person];
    
        answer.push_back(sum);
    }
    return answer;
}

int main(){
    vector<string> name = { "may", "kein", "kain", "radi" };
    vector<int> yearning = { 5, 10, 1, 3 };
    vector<vector<string>> photo = {{"may", "kein", "kain", "radi"},{"may", "kein", "brin", "deny"}, {"kon", "kain", "may", "coni"}};

    vector<int> answer = solution(name, yearning, photo);
    cout << answer[0];
    return 0;
}