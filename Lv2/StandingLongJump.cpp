#include <string>
#include <vector>

#define MODULER 1234567
using namespace std;

long long solution(int n) {
    long long answer = 0;

    vector<long long> dp(n + 1, 0);
    dp[1] = 1;
    dp[2] = 2;
    for(int i = 3; i <= n; i++){
        dp[i] = dp[i - 1] + dp[i - 2];
        dp[i] %= MODULER;
    }
    
    answer = dp[n] % MODULER;
    return answer;
}

int main(){
    int n = 4;
    solution(n);
    return 0;
}