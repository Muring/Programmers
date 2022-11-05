#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer(2, 0);
    int zero_cnt = 0, round = 0;

    while(s != "1"){
        string stemp = "";
        round++;

        for(int i = 0; i < s.size(); i++){
            if(s[i] == '0')
                zero_cnt++;
            else
                stemp += "1";
        }
        
        int num = stemp.size();
        s = "";
        while(num > 0){
            s += to_string(num % 2);
            num /= 2;
        }
    }
    answer[0] = round;
    answer[1] = zero_cnt;    
    
    return answer;
}

int main(){
    string s = "110010101001";

    solution(s);

    return 0;
}