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

vector<bool> visited(100047,false);
vector<int> adj[100047];
vector<int> ans;

int dfs(int u){
	visited[u] = true;
	for(auto k: adj[u]){
		if(!visited[k]){
			dfs(k);
		}
	}
	cout << u << " ";
}


int main() 
{
	int n,m;
	cin >> n >> m;
	while(m--){
		int u,v;
		cin >> u >> v;
		adj[u].push_back(v);
	}
	for(int i = 1; i<=n;i++){
		if(!visited[i]){
			dfs(i);
		}
	}
}
