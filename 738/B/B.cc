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


int algo(int grid[1000][1000], int n, int m){
	int count = 0;
	for(int i = 0; i< n;i++){
		bool check = false;
		for(int j = 0; j < m;j++){
			if(check && !grid[i][j]){
				count++;
			}
			if(grid[i][j]){
				check = true;
			}
		}
	}
	return count;
}


int main() 
{
	int n, m;
	cin >> n >> m;

	int** left[n][m];
	int** right[n][m];
	int** up[1000][1000];
	int** down[1000][1000];

	for(int i = 0; i < n;i++){
		for(int j = 0;j < m;j++){
			int a;
			cin >> a;
			left[i][j] = a;
			right[i][m-1-j] = a;
			up[j][i] = a;
			down[j][n-1-i] = a;
		}
	}
	//int ans = 0;
	//ans += algo(left,n,m);
	//ans += algo(right,n,m);
	//ans += algo(up,m,n);
	//ans += algo(down,m,n);
	//cout << ans << endl;
}
