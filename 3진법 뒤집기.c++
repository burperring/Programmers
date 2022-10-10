#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> arr;
    
    while(n > 0)
    {
        arr.push_back(n%3);
        n /= 3;
    }
    reverse(arr.begin(), arr.end());
    
    for(int i = 0; i < arr.size(); i++)
    {
        int x = pow(3,i);
        answer += arr[i] * x;
    }
    
    return answer;
}
