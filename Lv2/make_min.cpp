#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

int solution(vector<int> A, vector<int> B)
{
    int answer = 0;
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    int len = A.size();
    for(int i = 0; i < len; i++)
        answer += A[i] * B[len - i - 1]; 
    
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << answer << endl;

    return answer;
}

int main(){
    vector<int> A = { 1, 4, 2 };
    vector<int> B = { 5, 4, 4 };

    solution(A, B);

    return 0;
}