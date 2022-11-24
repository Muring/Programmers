#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b){
    int n;

    while(b != 0){
        n = a % b;
        a= b;
        b= n;
    }
    return a;
}

int lcm(int a, int b){
    return a * b / gcd(a, b);
}

int solution(vector<int> arr) {
    int answer = 0;

    answer = lcm(arr[0], arr[1]);
    for(int i = 2; i < arr.size(); i++)
        answer = lcm(answer, arr[i]);

    return answer;
}

int main(){
    vector<int> arr = { 2, 6, 8, 14 };
    solution(arr);
    return 0;
}