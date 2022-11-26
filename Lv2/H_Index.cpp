#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;

    sort(citations.begin(), citations.end(), greater<int>());
    
    for(int i = 0; i < citations.size(); i++){
        if(citations[i] > i)
            answer++;
        else
            break;
    }
    cout << answer++;
    return answer++;
}

int main(){
    vector<int> citations = { 0,1,5,7,10,13,14 };
    solution(citations);
    return 0;
}