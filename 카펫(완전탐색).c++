#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    
    for(int i = 1; i < (brown / 2) + 1; i++)
    {
        int bcheck = (brown - i * 2) / 2;
        int ycheck = bcheck - 2;
        
        if(ycheck * i == yellow)
        {
            answer.push_back(bcheck);
            answer.push_back(i+2);
            break;
        }
    }
    
    return answer;
}
