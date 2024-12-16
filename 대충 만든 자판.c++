#include <string>
#include <vector>
#include <map>
#define MAX 101

using namespace std;

map<char, int> m;

int ClickButtonCnt(vector<string> keymap, char c){
    int cnt = MAX;
    
    for(auto x : keymap){
        int found = x.find(c);
        
        if(found != string::npos)
            cnt = cnt > found + 1 ? found + 1 : cnt;
    }
    
    if(cnt == MAX)
        cnt = -1;
    
    m.insert(make_pair(c, cnt));
    
    return cnt;
}

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    
    for(auto x : targets){
        int cnt = 0;
        for(int i = 0; i < x.length(); i++){
            if(m.find(x[i]) != m.end()){
                if(m.find(x[i])->second == -1){
                    cnt = -1;
                    break;
                }
                cnt += m.find(x[i])->second;
            }
            else{
                int num = ClickButtonCnt(keymap, x[i]);
                if(num == -1){
                    cnt = -1;
                    break;
                }
                cnt += num;
            }
        }
        answer.push_back(cnt);
    }
    
    return answer;
}
