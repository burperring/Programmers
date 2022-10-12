#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    
    for(int i = 0; i < s.length(); i++)
    {
        if(65 <= s[i] && s[i] <= 90)
        {
            s[i] += n;
            
            if(s[i] >= 91)
                s[i] -= 26;
        }
        else if(97 <= s[i] && s[i] <= 122)
        {
            if(s[i] + n >= 123)
                s[i] -= 26;
            
            s[i] += n;
        }
    }
    
    return s;
}
