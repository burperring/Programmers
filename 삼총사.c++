#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> number) {
    int answer = 0;
    int len = number.size();
    
    vector<bool> v(len - 3, false);
    v.insert(v.end(), 3, true);
    
    do{
        int sum = 0;
        for(int i = 0; i < number.size(); i++){
            if(v[i]) sum += number[i];
        }
        if(sum == 0) answer++;
    }while(next_permutation(v.begin(), v.end()));
    // vector 조합 만들기
    
    return answer;
}
