#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;

    // people 배열 정렬
    sort(people.begin(), people.end());

    int min_index = 0;  // 최솟값의 위치
    while(people.size() > min_index){   // 남은 배열의 크기가 최솟값의 위치값과 같으면 모든 확인이 끝난 것
        if(people[min_index] + people.back() <= limit){     // 두명이 탈 수 있는 경우
            min_index++;
            answer++;
        }
        else
            answer++;
        people.pop_back();
    }
    cout << answer;
    return answer;
}

int main(){
    int limit = 100;
    vector<int> people = { 70, 50, 80 };
    
    solution(people, limit);
    return 0;
}