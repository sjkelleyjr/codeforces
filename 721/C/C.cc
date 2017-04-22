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

class Node{
public:
	vector<vector<int> > edges;
	Node(){

	}
};



int main() 
{
	int n,m;
	long long T;
	cin >> n >> m >> T;
	Node arr[n];
	//build the graph
	for(int i = 0 ; i<m;i++){
		int u, v, t;
		cin >> u >> v >> t;
		vector<int> edge(2);
		edge[0] = v - 1; //zero indexed
		edge[1] = t;
		arr[u-1].edges.push_back(edge);
	} 	
	//dp table
	//what do the elements of dp signify?
	int dp[n][n];
	//pp?
	int path[n][n];
	//assume everything is unreachable.
	for(int k = 0; k < n;k++){
		for(int u = 0; u < n;u++){
			dp[k][u] = T+1;
		}
	}
	//begin at the first node
	dp[0][0] = 0;
	//build the DP table
	for(int k = 0; k < n-1;k++){
		for(int u = 0; u < n;u++){
			//do we have enough time to visit this node in the path?
			if(dp[k][u] <= T){
				//iterating the edges
				for(auto e : arr[u].edges){
					//next edge to visit
					int v = e[0];
					//this edges time + time to get to the current node.
					int t = e[1] + dp[k][u];
					//k+1 path, using v edge, can we do better than the current path?
					if(t <= T && dp[k+1][v] > t){
						dp[k+1][v] = t;
						//set parent in path
						path[k+1][v] = u;
					}	
				}
			}
		}
	}
	int kmax = 0;
	for(int k = 1; k < n;k++){
		//how many nodes are below the time threshold?
		if(dp[k][n-1] <=  T){
			kmax = k;
		}
	}
	int ans[n];
	ans[0] = 0;
	ostringstream oss;
	//follow the path in reverse order.
	for(int k = kmax, v = n-1;k > 0;v = path[k--][v]){
		ans[k] = v;
	}
	//visit the k possible nodes
	for(int i = 0; i<=kmax;i++){
		oss << (ans[i] + 1) << " ";
	}
	cout << kmax + 1 << endl;
	cout << oss.str() << endl;
}

