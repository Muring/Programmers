#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;

    brown = brown / 2 + 2;
    int row = 3, col;
    for (int i = row; i < brown; i++) {
        col = brown - i;
        if ((i - 2) * (col - 2) == yellow) {
            answer.push_back(col);
            answer.push_back(i);
            break;
        }
    }
    cout << answer[0] << " " << answer[1] << endl;
    return answer;
}

int main() {
    int n, m;
    n = 10;
    m = 2;
    solution(n, m);
    return 0;
}