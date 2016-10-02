// Create your own template by modifying this file!
#include <bits/stdc++.h>
using namespace std;

#ifdef DEBUG
     #define debug(args...)            {dbg,args; cerr<<endl;}
#else
    #define debug(args...)              // Just strip off all debug tokens
#endif

struct debugger
{
    template<typename T> debugger& operator , (const T& v)
    {    
        cerr<<v<<" ";    
        return *this;    
    }
} dbg;


string board[51];
bool visited[51][51];
bool findCycle = false;
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
int n, m;


void dfs(int x, int y, int fX, int fY, char needColor){
	if(x<0||x >= n || y < 0 || y >= m){
		return;
	}
	if(board[x][y] != needColor) return;
	if(visited[x][y]){
		findCycle = true;
		return;
	}
	visited[x][y] = true;
	for(int i =0; i < 4;i++){
		int nextX = x + dx[i];
		int nextY = y + dy[i];
		if(nextX == fX && nextY == fY) continue;
		dfs(nextX,nextY,x,y,needColor);
	}

}

int main() 
{
	cin >> n >> m;
	for(int i = 0; i < n;i++){
		cin >>  board[i];
	}
	memset(visited,false,sizeof(visited));
	for(int i =0; i < n;i++){
		for(int j =0; j < m;j++){
			if(!visited[i][j]){
				dfs(i,j,-1,-1,board[i][j]);
			}
		}
	}
	cout << (findCycle ? "Yes" : "No") << endl;
}
