#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    int date[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string day[] = {"THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED"};
    string answer = "";
    
    for(int i = 0; i < a-1; i++)
    {
        b += date[i];
    }
    
    b = b % 7;
    
    answer = day[b];
    
    return answer;
}
