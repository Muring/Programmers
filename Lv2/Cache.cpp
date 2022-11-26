#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(int cacheSize, vector<string> cities) {
    int answer = 0;
    vector<string> cache;

    if(cacheSize == 0)
        return 5 * cities.size();

    for(int i = 0; i < cities.size(); i++){
        transform(cities[i].begin(), cities[i].end(), cities[i].begin(), ::tolower);
        auto itr = find(cache.begin(), cache.end(), cities[i]);

        // cache miss
        if(itr == cache.end()){
            if(cache.size() == cacheSize)
                cache.erase(cache.begin());
            answer += 5;
        }
        // cache hit
        else{
            cache.erase(itr);
            answer += 1;
        }
        cache.push_back(cities[i]);
    }
    cout << answer;
    return answer;
}

int main(){
    int cacheSize = 3;

    vector<string> cities = {"Jeju", "Pangyo", "Seoul", "NewYork", "LA", "Jeju",
                             "Pangyo", "Seoul", "NewYork", "LA"};
    solution(cacheSize, cities);
    return 0;
}