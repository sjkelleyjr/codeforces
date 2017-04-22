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
	int n,m;
	cin >> n >> m;
	vector<int> in(n,0);
	vector<vector<int> > adj(n,vector<int>(n,0));
	for(int i = 0; i < m;i++){
		int u, v;
		cin >> u >> v;
		u--; v--;
		adj[u][v] = 1;
		adj[v][u] = 1;
		in[u]++;
		in[v]++;
	}
	vector<char> ans(n, 0);
	for(int i = 0; i < n;i++){
		//if it's connected to all others, it should be a b
		if(in[i] == n-1){
			ans[i] = 'b';
		}
	}
	for(int i = 0; i < n;i++){
		//assume 'a'
		if(!ans[i]){
			ans[i] = 'a';
			for(int j = 0; j < n; j++){
				if(!ans[j]){
					//if there is an edge between this assumed 'a' and the current node, set it also to 'a', else, 'c'
					ans[j] = adj[i][j] ? 'a' : 'c';
				}
			}
			//break;
		}
	}
	for(int i = 0; i < n;i++){
		for(int j = 0; j < n;j++){
			if(i ==  j) continue;
			int dist = abs(ans[i] - ans[j]);
			//if there exists an edge between these two and their distances is too large
			//or there is no edge and the distance isn't large enough (ie, a-c)
			//the graph is not possible
			if(adj[i][j] && dist == 2 || !adj[i][j] && dist != 2){
				cout << "No" << endl;
				return 0;
			}
		}
	}
	cout << "Yes" << endl;
	for(auto i: ans){
		cout << i;
	}
	cout << endl;
}
