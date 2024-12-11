#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 1;
    int pivot = section[0];
    
    /*
    while(!section.empty()){
        int x = section.back() - m + 1;
        cout << x;
        section.pop_back();
        
        while(section.back() >= x && !section.empty()){
            section.pop_back();
        }
        
        answer++;
    }*/
    
    for(auto x : section){
        if(x < pivot + m){
            continue;
        }
        else{
            pivot = x;
            answer++;
        }
    }
    
    return answer;
}
