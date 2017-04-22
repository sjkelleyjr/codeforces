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

int main() 
{
	int n,m,k;
	cin >> n >> m >> k;
	vector<string> grid(n);
	for(int i = 0; i < n;i ++){
		string row;
		cin >> row;
		grid[i] = row;
	}
	for(auto i: grid){
		cout << i << endl;
	}
	for(int y = 0; y < m; y++){
		int spiderCount = 0;
		for(int x = 0; x < n;x++){
			if(grid[x][y+x] == 'L'){
				spiderCount++;
			}
			if(grid[x][y-x] == 'R'){
				spiderCount++;
			}
			if(grid[x+x][y] == 'U'){
				spiderCount++;
			}
			if(grid[x-x][y] == 'D'){
				spiderCount++;
			}
		}
		cout << spiderCount << " ";
	}
}
