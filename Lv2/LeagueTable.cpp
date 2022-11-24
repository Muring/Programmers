#include <iostream>

using namespace std;

int solution(int n, int a, int b)
{
    int answer = 0;
    
    while(a != b){
        a = (a + 1) / 2;
        b = (b + 1) / 2;
        answer++;
    }
    return answer;
}

int main(){
    int N = 8, A = 4, B = 7;
    solution(N, A, B);
    return 0;
}