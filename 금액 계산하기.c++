using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = 1LL * price * count * (count + 1) / 2;
    
    return answer <= money ? 0 : answer - money;
}

// 1LL : (long long) 1을 의미한다.
