#include <string>
#include <vector>
#include <stack>
using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    stack<char> s_str;
    
    for(int i=0; i<arr1.size(); i++) {
        int temp = arr1[i] | arr2[i];   // 비트 OR 연산자를 활용

        for(int j=0; j<n; j++) {
            if(temp % 2 == 1) {
                s_str.push('#');
            }
            else {
                s_str.push(' ');
            }
            temp /= 2;
        }
        
        answer.push_back("");
        while(!s_str.empty()){
            answer[i].push_back(s_str.top());
            s_str.pop();
        }
    }
    
    return answer;
}
