#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int num = x;
    int sum = 0;
    
    while(num)
    {
        sum += num % 10;
        num /= 10;
    }
    
    answer = x % sum == 0 ? true : false;
    
    return answer;
}
