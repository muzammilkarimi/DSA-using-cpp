#include <bits/stdc++.h>
using namespace std;
bool isSafe(vector<vector<int>> &maze,int n,int x,int y,vector<vector<int>> visited){
    if((x>=0 and x<n)and(y>=0 and y<n) and maze[x][y]==1 and visited[x][y]==0) return true;
    else return false;
}
void solve(vector<vector<int>> &maze,int n,vector<string>& ans,int x,int y,vector<vector<int>>& visited,string path){
    // base case
    if(x==n-1 and y==n-1){
        ans.push_back(path);
        return ;
    }
    visited[x][y]=1;
    // we have 4 directions 
    // down
    int newx=x-1,newy=y;
    if(isSafe(maze,n,newx,newy,visited)){
        path.push_back('D');
        solve(maze,n,ans,newx,newy,visited,path);
        path.pop_back();
    }
    // left
    newx=x,newy=y-1;
    if(isSafe(maze,n,newx,newy,visited)){
        path.push_back('L');
        solve(maze,n,ans,newx,newy,visited,path);
        path.pop_back();
    }
    // right
    newx=x,newy=y+1;
    if(isSafe(maze,n,newx,newy,visited)){
        path.push_back('R');
        solve(maze,n,ans,newx,newy,visited,path);
        path.pop_back();
    }
    // up
    newx=x-1,newy=y;
    if(isSafe(maze,n,newx,newy,visited)){
        path.push_back('L');
        solve(maze,n,ans,newx,newy,visited,path);
        path.pop_back();
    }
    
    visited[x][y]=0;
}
vector<string> rat_in_maze(vector<vector<int>> &maze,int n){
    vector<string> ans;
    if(maze[0][0]==0){
        return ans;
    }
    vector<vector<int>> visited=maze;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            visited[i][j]=0;
        }
    }
    int srcx=0,srcy=0;
    string path="";
    solve(maze,n,ans,srcx,srcy,visited,path);
    sort(ans.begin(),ans.end());
    return ans;
}
int main()
{
    vector<vector<int>> maze = { {1, 0, 0},
                                 {1, 1, 0},
                                 {0, 1, 1} };
    int n=3;
    vector<string> result=rat_in_maze(maze,n);

    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }

    return 0;
}