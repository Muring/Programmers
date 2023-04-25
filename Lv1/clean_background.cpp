#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;
    int ys = -1, yb = 0, xs = 60, xb = 0; // small big

    for(int i = 0; i < wallpaper.size(); i++){
        for(int j = 0; j < wallpaper[i].size(); j++){
            if(wallpaper[i][j] == '#'){
                if(ys == -1) ys = i;
                if(yb < i) yb = i;
                if(xs > j) xs = j;
                if(xb < j) xb = j;
            } 
        }
    }
    answer.push_back(ys);
    answer.push_back(xs);
    answer.push_back(yb + 1);
    answer.push_back(xb + 1);
    return answer;
}

int main(){
    vector<string> wallpaper ={ ".##...##.", "#..#.#..#", "#...#...#", ".#.....#.", "..#...#..", "...#.#...", "....#...." };
    vector<int> answer = solution(wallpaper);
    for(auto x: answer)
        cout << x << " ";
    cout << endl;
    return 0;
}