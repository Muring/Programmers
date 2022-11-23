#include <string>
#include <vector>
#include <iostream>
#include <map>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer(2);
    map<string, int> word;
    
    word[words[0]]++;
    for(int i = 1; i < words.size(); i++){
        word[words[i]]++;
        if(word[words[i]] > 1 || words[i].front() != words[i - 1].back()){
            answer[0] = (i % n) + 1;
            answer[1] = (i / n) + 1;
            break;
        }
    }
    // [����] ��ư�� ������ ��� ���� �� �� �ֽ��ϴ�. 
    cout << answer[0] << " " << answer[1] << endl;

    return answer;
}

int main(){
    int n = 2;
    vector<string> s = {"hello", "one", "even", "never", "now", "world", "draw"};
    solution(n, s);
}