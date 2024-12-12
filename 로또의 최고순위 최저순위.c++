#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int cnt = 0;
    int win = 0;
    
    for(auto x : lottos){
        if(x == 0)
            cnt++;
        else{
            auto it = find(win_nums.begin(), win_nums.end(), x);
            if(it != win_nums.end())
                win++;
        }
    }
    
    while(answer.size() != 2){
        switch(cnt + win){
            case 0:
            case 1:
                answer.push_back(6);
                break;
            case 2:
                answer.push_back(5);
                break;
            case 3:
                answer.push_back(4);
                break;
            case 4:
                answer.push_back(3);
                break;
            case 5:
                answer.push_back(2);
                break;
            case 6:
                answer.push_back(1);
                break;
        }
        
        cnt = 0;
    }
    
    return answer;
}
