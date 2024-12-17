#include <string>
#include <vector>
#include <queue>
#include <iostream>

// 기존 미로찾기와 비슷한 문제
// 하지만 값을 2배 해줘서 겹쳐지는 부분의 문제를 해결해주는게 가장 큰 관건

using namespace std;

int dy[] = {0, 0, 1, -1};
int dx[] = {1, -1, 0, 0};

int solution(vector<vector<int>> rectangle, int characterX, int characterY, int itemX, int itemY) {
    int answer = 0;
    
    characterX *= 2, characterY *= 2, itemX *= 2, itemY *= 2;
    vector<vector<int>> v(110, vector<int>(110));
    
    int x1, x2, y1, y2;
    
    for(int i = 0; i < rectangle.size(); i++){
        for(int j = 0; j < rectangle[i].size(); j++)
            rectangle[i][j] = rectangle[i][j] * 2;
        
        x1 = rectangle[i][0], x2 = rectangle[i][2];
        y1 = rectangle[i][1], y2 = rectangle[i][3];
        
        for(int y = y1; y <= y2; y++){
            for(int x = x1; x <= x2; x++)
                v[y][x] = 1;
        }
    }
    
    for(auto a : rectangle){
        x1 = a[0], x2 = a[2];
        y1 = a[1], y2 = a[3];
        
        for(int y = y1 + 1; y < y2; y++){
            for(int x = x1 + 1; x < x2; x++){
                v[y][x] = 0;
            }
        }
    }
    
    queue<pair<int, int>> q;
    q.emplace(characterY, characterX);
    
    while(!q.empty()){
        int y = q.front().first;
        int x = q.front().second;
        q.pop();
        
        if(y == itemY && x == itemX)
            break;
        
        for(int i = 0; i < 4; i++){
            int nextY = y + dy[i];
            int nextX = x + dx[i];
            
            if(v[nextY][nextX] == 1){
                q.emplace(nextY, nextX);
                //cout << nextY << " " << nextX << endl;
                v[nextY][nextX] = v[y][x] + 1;
            }
        }
    }
    
    answer = v[itemY][itemX] / 2;
    return answer;
}
