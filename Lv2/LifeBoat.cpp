#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;

    // people �迭 ����
    sort(people.begin(), people.end());

    int min_index = 0;  // �ּڰ��� ��ġ
    while(people.size() > min_index){   // ���� �迭�� ũ�Ⱑ �ּڰ��� ��ġ���� ������ ��� Ȯ���� ���� ��
        if(people[min_index] + people.back() <= limit){     // �θ��� Ż �� �ִ� ���
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