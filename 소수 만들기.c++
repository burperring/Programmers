#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

bool isPrime(int check){  // 소수 체크
    for(int i = 2; i * i <= check; i++){
        if(check % i == 0) return false;
    }
    return true;
}

int solution(vector<int> nums) {
    int answer = 0;
    int len = nums.size();

    vector<bool> v(len - 3, false);
    v.insert(v.end(), 3, true);

    // vector 원소 3개 조합하기
    do{
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            if(v[i]) sum += nums[i];
        }
        if(isPrime(sum)) answer++;
    }while(next_permutation(v.begin(), v.end()));

    return answer;
}
