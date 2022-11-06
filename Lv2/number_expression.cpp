#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 1;

    int comb = 3, i = 2;
    while (n - comb >= 0) {
        if ((n - comb) % i == 0)
            answer++;

        i++;
        comb += i;
    }
    
    return answer;
}

int main() {
    int n = 15;

    solution(n);

    return 0;
}