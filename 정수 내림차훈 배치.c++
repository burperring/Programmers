#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    string ns = to_string(n);
    
    sort(ns.begin(), ns.end(), greater<>());
    answer = stoll(ns);
    
    return answer;
}
