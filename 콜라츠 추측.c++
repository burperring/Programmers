// 입력된 수가 짝수면 2로 나눈다.
// 입력된 수가 홀수면 3을 곱하고 1을 더한다.
// 결과로 나온 수에 같은 작업을 1이 될 때까지 반복한다.
// 500번 반복해서 답이 안나오면 -1, 주어진 수가 1이면 0을 출력한다.

#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    long checkNum = num;
    
    while(answer < 500)
    {
        if(num == 1)
        {
            answer = 0;
            break;
        }
        
        if(checkNum == 1)
            break;
        
        if(checkNum % 2 == 0)
        {
            checkNum = checkNum / 2;
        }
        else
        {
            checkNum = checkNum * 3 + 1;
        }
        
        answer++;
    }
    
    if(answer == 500)
        answer = -1;
    
    return answer;
}
