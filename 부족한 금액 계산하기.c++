using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = 1LL * price * count * (count + 1) / 2;
    
    return answer <= money ? 0 : answer - money;
}
