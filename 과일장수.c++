#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    int cnt = 1;
    int len = score.size();
    
    sort(score.begin(), score.end(), greater<int>());
    
    while(cnt * m <= len){
        answer += score[cnt * m - 1] * m;
        cnt++;
    }
    
    return answer;
}
