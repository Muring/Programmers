#include <string>
#include <vector>
#include <iostream>

using namespace std;

int BinaryNum(int num){
    // n을 2진수로 전환
    int cnt = 0;
    while(num > 0){
        if(num % 2 == 1)
            cnt++;
        
        num /= 2;
    }
    return cnt;
}

int solution(int n) {
    int answer = 0;
    
    // n의 1 개수 구하기
    int cnt = 0;
    cnt = BinaryNum(n);

    // n보다 크면서 1 개수가 같은 수 구하기
    int new_cnt = 0;
    while(true){
        n++;
        new_cnt = BinaryNum(n);
        if(new_cnt == cnt)
            break;
    }
    answer = n;

    return answer;
}

int main(){
    int N;
    cin >> N;

    cout << solution(N);
    return 0;
}