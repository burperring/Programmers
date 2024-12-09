#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "Yes";
    
    for(auto x : goal){
        if(cards1.front() == x){
            cards1.erase(cards1.begin());
        }
        else if(cards2.front() == x){
            cards2.erase(cards2.begin());
        }
        else{
            answer = "No";
            break;
        }
    }
    
    return answer;
}
