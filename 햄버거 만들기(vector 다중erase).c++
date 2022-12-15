#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    vector<int> vt;
    
    for(int i = 0; i < ingredient.size(); i++)
    {
        vt.push_back(ingredient[i]);
        
        if(ingredient[i] == 1 && vt.size() >= 4)
        {
            int ch = vt.size() - 1;
            
            if(vt[ch-3] == 1 && vt[ch-2] == 2 && vt[ch-1] == 3 && vt[ch] == 1)
            {
                vt.erase(vt.begin() + ch - 3, vt.begin() + ch + 1);
                answer++;
            }
        }
        
    }
    
    return answer;
}
