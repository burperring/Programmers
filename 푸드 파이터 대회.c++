#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    
    for(int i = 1; i < food.size(); i++){
        int cnt = 0;
        while(cnt != food[i] / 2){
            answer += to_string(i);
            cnt++;
        }
    }
    
    string rev = answer;
    reverse(rev.begin(), rev.end());
    
    answer += '0';
    answer += rev;
    
    return answer;
}
