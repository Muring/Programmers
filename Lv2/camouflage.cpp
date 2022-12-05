#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    map<string, int> m;

    for(auto cloth : clothes)
        m[cloth[1]] += 1;
    
    for(auto i = m.begin(); i != m.end(); i++)
        answer *= i->second + 1;

    return answer - 1;
}

int main(){
    vector<vector<string>> s = {{"yellow_hat", "headgear"}, {"blue_sunglasses", "eyewear"},
                                {"green_turban", "headgear"}};
    solution(s);
    return 0;
}