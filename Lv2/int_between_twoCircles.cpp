#include <string>
#include <vector>
#include <math.h>
#include <iostream>

using namespace std;

long long solution(int r1, int r2) {
    long long answer = 0;

    //바깥 큰 원 내의 점 수
    long long count = r2;
    for(int i = 1; i < r2; i++)
        count += (long long)sqrt(1LL * r2 * r2 - 1LL * i * i);
    long long cnt1 = count * 4 + 1;

    //내부 작은 원 내의 점 수
    count = r1 - 1;
    for(int i =1; i < r1; i++){
        long long temp = (long long)sqrt(1LL * r1 * r1 - 1LL * i * i);
        if(temp * temp + 1LL * i * i == 1LL * r1 * r1) count += temp - 1;
        else
            count += temp;
    }
    long long cnt2 = count * 4 + 1;

    answer = cnt1 - cnt2;
    return answer;
}

int main(){
    int r1 = 2;
    int r2 = 3;
    cout << solution(r1, r2);
    return 0;
}