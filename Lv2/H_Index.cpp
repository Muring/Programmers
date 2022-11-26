#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;

    sort(citations.begin(), citations.end());
    
    int count = 0;
    for(int i = citations.size() - 1; i >= 0; i--){
        count++;
        if(citations[i] <= count){
            answer = citations[i];
            break;    
        }
    }
    cout << answer;
    return answer;
}

int main(){
    vector<int> citations = { 3, 0, 6, 1, 5 };
    solution(citations);
    return 0;
}