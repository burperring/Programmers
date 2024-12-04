#include <map>
#include <string>
#include <vector>

using namespace std;

map<string, int> nummap; 

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(string s) {
    nummap.insert({ "zero",0 });
    nummap.insert({ "one",1 });
    nummap.insert({ "two",2 });
    nummap.insert({ "three",3 });
    nummap.insert({ "four",4 });
    nummap.insert({ "five",5 });
    nummap.insert({ "six",6 });
    nummap.insert({ "seven",7 });
    nummap.insert({ "eight",8 });
    nummap.insert({ "nine",9 });

    size_t position = 0;

    for(auto iter = nummap.begin(); iter != nummap.end(); ++iter)
    {
        while((position = s.find(iter->first)) != string::npos)
        {
            s.replace(position, iter->first.size(), to_string(iter->second));
        }
    }
    int answer = stoi(s);

    return answer;
}

/*
#include <bits/stdc++.h>
using namespace std;

int solution(string s) {
    map<string,string> nums={{"zero","0"},{"one","1"},{"two","2"},{"three","3"},
                          {"four","4"},{"five","5"},{"six","6"},{"seven","7"},
                          {"eight","8"},{"nine","9"}};

    for(auto it: nums)
        s=regex_replace(s, regex(it.first), it.second);

    return stoi(s);
}

// regex_replace(문자열, regex(정규식), 치환할 문자열)
// 문자열에서 문자를 검색해 치환하는 함수

*/
