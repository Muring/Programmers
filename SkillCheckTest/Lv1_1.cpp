#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> result;

    while(n >= 1){
        result.push_back((n % 3));
        n /= 3;
    }

    int count = 1;
    for(int i = result.size() - 1; i >= 0; i--){
        answer += result[i] * count;
        count *= 3;
    }
    return answer;
}

int main(){
    int n = 45;
    cout << solution(n);
    return 0;
}