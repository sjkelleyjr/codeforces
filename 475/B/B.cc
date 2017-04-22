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


class space{
public:
	//+1 in x is right,
	//-1 in x is left
	//+1 in y is down
	//-1 in y is up
	int xDir, yDir;
	int posX, posY;
	space(int x, int y):xDir(x),yDir(y){}
	space(){}
};

void dfs(vector<vector<space> >&grid, int i, int j, vector<vector<bool> > &visited){
	stack<space>s;
	s.push(grid[i][j]);
	visited[i][j] = true;
	while(!s.empty()){
		space top = s.top();
		s.pop();
		visited[top.posX][top.posY] = true;
		//check to ensure these haven't been visited first
		if(top.xDir == 1){	
			//push i+1
			if(top.posX+1 < grid.size() && !visited[top.posX+1][top.posY]){
				s.push(grid[top.posX+1][top.posY]);
			}
		}else{
			//push i-1
			if(top.posX-1 >  0 && !visited[top.posX-1][top.posY]){
				s.push(grid[top.posX-1][top.posY]);
			}
		}
		if(top.yDir == 1){
			//push j+1
			if(top.posY + 1 < grid[0].size() && !visited[top.posX][top.posY+1]){
				s.push(grid[top.posX][top.posY+1]);
			}
		}else{
			//push j-1
			if(top.posY-1 > 0 && !visited[top.posX][top.posY-1] ){
				s.push(grid[top.posX][top.posY-1]);
			}
		}
	}
}



int main() 
{
	int n, m;
	cin >> n >> m;
	vector<vector<space> > grid(n, vector<space>(m));
	vector<vector<bool> > visited(n, vector<bool>(m,false));
	string rowDir, colDir;
	cin >> rowDir;
	cin >> colDir;
	if(rowDir[0] == '>' && colDir[m-1] == 'v' && rowDir[n-1] == '<' && colDir[0] == '^'){
		cout << "YES" << endl;
		return 0;
	}

	if(rowDir[0] == '<' && colDir[m-1] == '^' && rowDir[n-1] == '>' && colDir[0] == 'v'){
		cout << "YES" << endl;
		return 0;
	}
	cout << "NO" << endl;
	//for(int i = 0 ; i< n;i++){
	//for(int i = 0 ; i< n;i++){
	//	for(int j = 0; j < m; j++){
	//		space s;
	//		if(rowDir[i] == '>'){
	//			s.xDir = 1;
	//		}else if(rowDir[i] == '<'){
	//			s.xDir = -1;
	//		}
	//		if(colDir[j] == 'v'){
	//			s.yDir = 1;
	//		}else if(colDir[j] == '^'){
	//			s.yDir = -1;
	//		}
	//		s.posX = i;
	//		s.posY = j;
	//		grid[i][j] = s;
	//	}
	//}
	//for(int i = 0; i< n;i++){
	//	for(int j = 0; j < m;j++){
	//		if(!visited[i][j]){
	//			dfs(grid,i,j,visited);
	//		}
	//	}
	//}
	//for(int i = 0; i < n;i++){
	//	for(int j = 0; j <  m;j++){
	//		if(!visited[i][j]){
	//			cout << "NO" << endl;
	//			return 0;
	//		}
	//	}
	//}
	//cout << "YES" << endl;
}
