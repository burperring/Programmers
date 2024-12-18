#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// 문제에 휘둘리지 말고 값을 탐색하는 문제
// 이분 탐색을 이용하여 문제 해결

bool result(vector<int> diffs, vector<int> times, long long limit, int test){
    long long testLimit = 0;
    
    for(int i = 0; i < diffs.size(); i++){
        if(diffs[i] > test){
            int failCnt = diffs[i] - test;
            
            testLimit += times[i] * (failCnt + 1);
            testLimit += times[i - 1] * failCnt;
        }
        else
            testLimit += times[i];
    }
    
    if(testLimit > limit)
        return false;
    else
        return true;
}

int solution(vector<int> diffs, vector<int> times, long long limit) {
    int answer = 0;
    int low = 1;
    int high = *max_element(diffs.begin(), diffs.end());
    
    while(low <= high){
        int test = (low + high) / 2;
        
        bool testResult = result(diffs, times, limit, test);
        
        if(testResult)
            high = test - 1;
        else
            low = test + 1;
    }
    
    return low;
}
