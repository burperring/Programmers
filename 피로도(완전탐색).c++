#include <string>
#include <vector>

using namespace std;

int ch[9] = {false};
vector<vector<int>> dungeon;
int answer = -1;

void dfs(int k, int cnt){
    if(k<0){
        return;
    }
    for(int i=0;i<dungeon.size();i++){
    	if(!ch[i]&&k>=dungeon[i][0]){ //방문하지 않았고 최소 필요 피로도 조건 만족하는 노드로 이동하여 탐색
            ch[i] = true;
            dfs(k-dungeon[i][1], cnt+1);
            ch[i] = false;
        }
    }
    answer = max(answer, cnt);
}

int solution(int k, vector<vector<int>> dungeons) {
    dungeon = dungeons;
    dfs(k, 0);  
    return answer;
}
