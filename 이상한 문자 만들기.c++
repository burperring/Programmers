#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int check = 0;
    
    for(int i = 0; i < s.size(); i++)
    {
        if(check % 2 == 0 && s[i] != ' ')
        {
            if(s[i] > 96)
                answer += (s[i] - 32);
            else
                answer += s[i];
            check++;
        }
        else if(s[i] == ' ')
        {
            answer += ' ';
            check = 0;
        }
        else
        {
            if(s[i] > 96)
                answer += s[i];
            else
                answer += (s[i] + 32);
            check++;
        }
    }
    
    return answer;
}
