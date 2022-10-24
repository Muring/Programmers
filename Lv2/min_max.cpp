#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    int min = 1e9;
    int max = -1e9;

    istringstream ss(s);
    string stemp;
    int ntemp;

    while(getline(ss, stemp, ' ')){
        ntemp = stoi(stemp);
        min = min > ntemp ? ntemp : min;
        max = max < ntemp ? ntemp : max;
    }
    answer = to_string(min) + ' ' + to_string(max);
    cout << answer;
    return answer;
}

int main(){
    string s = "-1 -2 -3 -4";
    solution(s);

    return 0;
}