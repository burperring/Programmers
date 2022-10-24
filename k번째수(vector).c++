#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> check;
    
    for(int i = 0; i < commands.size(); i++)
    {
        for(int j = commands[i][0]-1; j < commands[i][1]; j++)
        {
            check.push_back(array[j]);
        }
        
        sort(check.begin(), check.end());
        answer.push_back(check[commands[i][2]-1]);
        check.clear();
    }
    
    return answer;
}
