#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

class Point {
    public:
        void move(int _y, int _x){
            y = _y;
            x = _x;
        }
        int getY(){
            return y;
        }
        int getX() {
            return x;
        }
    private:
        int y = 0;
        int x = 0;
};

int dy[4] = { -1,1,0,0 };
int dx[4] = { 0,0,-1,1 };

int dic2Idx(char c){
    if(c == 'N') return 0;
    if(c == 'S') return 1;
    if(c == 'W') return 2;
    if(c == 'E') return 3;
}

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer;
    Point loc;

    for(int i = 0; i < park.size(); i++){
        for(int j = 0; j < park[i].size(); j++){
            if(park[i][j] == 'S'){
                loc.move(i, j);
                break;
            }                
        }
    }

    for(auto route : routes){
        bool flag;
        int y = loc.getY();
        int x = loc.getX();
        for(int i = 0; i < route[2] - '0'; i++){
            flag = true;
            y += dy[dic2Idx(route[0])];
            x += dx[dic2Idx(route[0])];
            if(y < 0 || y >= park.size() || x >= park[y].size() || x < 0) break;
            if(park[y][x] == 'X') break;
            flag = false;
        }
        if(flag) continue;
        loc.move(y, x);
          
        //cout << x << " " << y << endl;   
    }
    answer.push_back(loc.getY());
    answer.push_back(loc.getX());  
    return answer;
}

int main(){
    vector<string> park = {"SOO","OXX","OOO"};
    vector<string> routes = {"E 2","S 2","W 1"};
    
    vector<int> answer = solution(park, routes);
    cout << "answer: ";
    for(auto x : answer)
        cout << x << " ";
    
    return 0;
}