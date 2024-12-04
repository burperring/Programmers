#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int len = t.length() - p.length();
    
    for(int i = 0; i <= len; i++){
        string x = t.substr(i, p.length());
        if(x <= p)
            answer++;
    }
    
    return answer;
}
