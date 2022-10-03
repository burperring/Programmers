#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    return (long long)(a + b) * (abs(a - b) + 1) / 2;
}

// 시그마 공식
// n(n+1) / 2
