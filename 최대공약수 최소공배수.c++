#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int a;
    
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0 && m % i == 0)
            a = i;
    }
    
    answer.push_back(a);
    answer.push_back((n * m) / a);
    
    return answer;
}
