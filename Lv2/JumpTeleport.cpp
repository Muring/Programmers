#include <iostream>

using namespace std;

int solution(int n)
{
    int ans = 0;
    
    while(n > 0){
        if(n % 2 != 0){
            n -= 1;
            ans++;
        }
        else
            n /= 2;
    }
    cout << ans;
    return ans;
}

int main(){
    int n = 5000;
    solution(n);
    return 0;
}