#include <iostream>
#include <vector>

using namespace std;

int solution(int n) {
    long long answer = 0;
    vector<long long> fibo = { 0, 1 };

    
    for(int i = 1; i < n; i++){
        fibo.push_back((fibo[i - 1] + fibo[i]) % 1234567);
    }
    
    answer = fibo.back();
    return answer;
}

int main(){
    int n = 6;
    cout << solution(n);
    
    return 0;
}