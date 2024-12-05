#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    map<char, int> m;
    
    for(int i = 0; i < s.length(); i++){
        if(m.find(s[i]) != m.end()){
            int x = m.find(s[i])->second;
            m[s[i]] = i;
            //m.find(s[i])->second = i;
            answer.push_back(i - x);
        }
        else{
            m.insert({s[i], i});
            answer.push_back(-1);
        }
    }
    
    return answer;
}
