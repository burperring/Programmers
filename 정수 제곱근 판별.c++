#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

long long solution(long long n) {
    long long answer = sqrt(n);

    return powl(answer, 2) == n ? powl(answer + 1, 2) : -1;
    
    return answer;
}
