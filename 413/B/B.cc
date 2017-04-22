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

vector<vector<int> > g(2*10e4,vector<int>(10,0));
vector<vector<int> > a(2*10e4,vector<int>(10,0));
vector<int> g_2(10,0);

int main() 
{
	int n,m,k;
	cin >> n >> m >> k;
	for(int i = 0; i < n; i++){
		//ith employee in jth room
		for(int j = 0; j < m;j++){
			cin >> a[i][j];
		}
	}
	for(int i = 0; i < k;i++){
		int u,v;
		cin >> u >> v;
		u--;v--;
		g_2[v]++;
		g[u][v]++;
	}
	//ith element holds the ith employees ans
	for(int i = 0; i < n;i++){
		int ans = 0;
		for(int j = 0; j < m; j++){
			ans += a[i][j] == 0 ? 0 : g_2[j] - g[i][j];
		}
		cout << ans << " ";
	}	
}
