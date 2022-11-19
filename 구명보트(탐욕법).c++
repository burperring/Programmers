#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    int start = 0;
    int end = people.size() - 1;
    
    sort(people.rbegin(), people.rend());
    
    while(start <= end)
    {
        if(people[start] + people[end] <= limit)
        {
            start++;
            end--;
            answer++;
        }
        else
        {
            start++;
            answer++;
        }
    }
    
    return answer;
}
