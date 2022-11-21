#include <string>
#include <vector>
#include <iostream>

using namespace std;

int BinaryNum(int num){
    // n�� 2������ ��ȯ
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
    
    // n�� 1 ���� ���ϱ�
    int cnt = 0;
    cnt = BinaryNum(n);

    // n���� ũ�鼭 1 ������ ���� �� ���ϱ�
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