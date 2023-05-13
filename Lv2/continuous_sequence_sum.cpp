#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> sequence, int k) {
    vector<int> answer;

    int s = 0, e = 0;
    int seqLen = sequence.size() + 1;
    int sum = sequence[0];
    pair<int, int> result;

    while(s <= e && e < sequence.size()){
        if(sum < k)
            sum += sequence[++e];
        else if(sum == k){
            if(e - s + 1 < seqLen){
                seqLen = e - s + 1;
                result = {s, e};
            }
            else if(e - s + 1 == seqLen){
                if(s < result.first)
                    result = {s, e};
            }
            sum -= sequence[s++];
        }
        else
            sum -= sequence[s++];
    }
    answer.push_back(result.first);
    answer.push_back(result.second);
    return answer;
}

int main(){
    vector<int> seq = {1, 2, 3, 4, 5};
    int k = 7;
    vector<int> ans = solution(seq, k);

    for(auto x : ans)
        cout << x << " ";
    return 0;
}