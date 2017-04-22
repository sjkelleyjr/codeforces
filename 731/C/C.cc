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

vector<bool> visited;


int main() {
	long long n,m,k;
	cin >> n >> m >> k;
	long long colors[k];
	long long socks[n][n];
	long long ans(0);
	visited.resize(n);
	fill(visited.begin(),visited.end(),false);
	for(int i = 0; i< n;i++){
		for(int j = 0; j < n;j++){
			socks[i][j] = 0;
		}
	}
	for(int i = 0; i < n;i++){
		cin >> colors[i];
	}
	for(int i = 0; i< m;i++){
		long long l,r;
		cin >> l >> r;
		socks[l-1][r-1] = 1;
	}

	//for(int i = 0; i< n;i++){
	//	if(!visited[i]){
	//		ans += dfs(socks);
	//	}
	//}
	cout << ans << endl;
}
