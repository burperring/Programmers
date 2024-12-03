#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    
    int findKim = find(seoul.begin(), seoul.end(), "Kim") - seoul.begin();
    
    answer += "김서방은 " + to_string(findKim) + "에 있다";
    
    return answer;
}
