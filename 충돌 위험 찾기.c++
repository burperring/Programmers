#include <string>
#include <vector>
#include <queue>
using namespace std;

struct robot
{
    int route;
    int nIdx;
    int r;
    int c;
    bool finish;
};

void move(vector<vector<int>> &points, robot &rr, vector<vector<int>> &routes)
{
    int nr=points[routes[rr.route][rr.nIdx]-1][0];
    int nc=points[routes[rr.route][rr.nIdx]-1][1];
    if (nr==rr.r&&nc==rr.c)
    {
        rr.nIdx+=1;
        if (rr.nIdx>=routes[rr.route].size()){
            rr.finish=true;
            return;
        }
        nr=points[routes[rr.route][rr.nIdx]-1][0];
        nc=points[routes[rr.route][rr.nIdx]-1][1];
    }
    if (rr.r<nr)
    {
        rr.r+=1;    
    }
    else if (rr.r>nr){
        rr.r-=1;
    }
    else if(rr.c<nc){
        rr.c+=1;
    }
    else if(rr.c>nc) 
    {
        rr.c-=1;
    }
    return;
}

int solution(vector<vector<int>> points, vector<vector<int>> routes) {
    int answer = 0;
    vector<vector<int>> prev(101,vector<int>(101,0));
    robot rr;
    queue<robot> q;
    vector<vector<int>> visited(101,vector<int>(101,0));    
    for (int i=0; i<routes.size(); i++){
        rr.route=i;
        rr.r=points[routes[i][0]-1][0];
        rr.c=points[routes[i][0]-1][1];
        rr.nIdx=1;
        rr.finish=false;
        q.push(rr);
        visited[rr.r][rr.c]+=1;
        if (visited[rr.r][rr.c]==2){
            answer+=1;
        }
    }
    while(!q.empty())
    {
        visited=vector<vector<int>>(101,vector<int>(101,0));
        queue<robot> nq;
        while(!q.empty())
        {
            rr=q.front();
            q.pop();
            move(points, rr, routes);
            if (!rr.finish)
            {
                nq.push(rr);
                visited[rr.r][rr.c]+=1;
                if (visited[rr.r][rr.c]==2){
                    answer+=1;
                }
            }
        }
        q=nq;
    }
    
    return answer;
}
