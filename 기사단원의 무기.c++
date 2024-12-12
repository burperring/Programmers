#include <string>
#include <vector>
#include <iostream>

using namespace std;

int Divisor(int num){
    if(num == 1)
        return 1;
    
    int divisor = 2;
    
    for(int i = 2; i <= num / 2; i++){
        if(num % i == 0)
            divisor++;
    }
    
    return divisor;
}

int solution(int number, int limit, int power) {
    int answer = 0;
    
    for(int i = 1; i <= number; i++){
        int x = Divisor(i);
        
        if(x > limit)
            x = power;
        
        answer += x;
    }
    
    return answer;
}
