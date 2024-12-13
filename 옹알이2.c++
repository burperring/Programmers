#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<string> nep = {"aya", "ye", "woo", "ma"};

bool check(string temp){
    bool equl = false;
    string use = "";
    
    while(temp.length() != 0){
        equl = false;
        
        for(auto x : nep){
            if(temp.length() >= x.length()){
                if(temp.compare(0, x.length(), x) == 0 && x != use){
                    equl = true;
                    use = x;
                    temp.erase(0, x.length());
                    break;
                }
            }
        }
        if(!equl)
            return false;
    }
    
    return true;
}

int solution(vector<string> babbling) {
    int answer = 0;
    
    for(auto x : babbling){
        if(check(x)){
            cout << x << " ";
            answer++;
        }
    }
    
    /*
    vector<string> nep = {"aya", "ye", "woo", "ma"};
    vector<string> canSpel;
    
    for(int i = 1; i <= 4; i++){
        vector<bool> v(4 - i, false);
        v.insert(v.end(), i, true);
        
        do{
            string temp = "";
            for(int k = 0; k < 4; k++){
                if(v[k]) temp += nep[k];
            }
            canSpel.push_back(temp);
        }while(next_permutation(v.begin(), v.end()));
    }
    
    for(auto x : babbling){
        auto check = find(canSpel.begin(), canSpel.end(), x);
        if(check != canSpel.end())
            answer++;
    }*/
    
    return answer;
}
