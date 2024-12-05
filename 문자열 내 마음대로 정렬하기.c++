#include <string>
#include <vector>
#include <algorithm>

int N;
using namespace std;

bool cmp(string a, string b)
{
    if(a[N] == b[N])
        return a < b;
    
    return a[N] < b[N];
}

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    N = n;
    sort(strings.begin(), strings.end(), cmp);
    answer = strings;
    
    return answer;
}
