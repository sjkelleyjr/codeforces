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

class node{
public:
	int val;
	vector<pair<node*,int> > list;
	node(){}
	node(int v):val(v){}
};


int n, q, s;
// A utility function to find the vertex with minimum distance value, from
// the set of vertices not yet included in shortest path tree
int minDist(vector<long long> dist, vector<bool> sptSet)
{
   // Initialize min value
   int min = INT_MAX, min_index;
  
   for (int v = 0; v < n; v++)
     if (sptSet[v] == false && dist[v] <= min)
         min = dist[v], min_index = v;
  
   return min_index;
}



vector<long long> dijkstra(vector<node*> graph, int src)
{
	vector<long long> dist(n,INT_MAX);
	vector<bool> sptSet(n,false);
	dist[src] = 0;
	for(int i = 0; i < graph.size()-1;i++){
		int u = minDist(dist,sptSet);
		sptSet[u] = true;
		for(auto n: graph[u]->list){
			if(!sptSet[n.first->val] && dist[u] != INT_MAX && dist[u] + n.second < dist[n.first->val]){
				dist[n.first->val] = dist[u] + n.second;
			}
		}
	}		
	return dist;
}






int main() 
{
	cin >> n >> q >> s;
	s--;
	vector<node*> G(n+1);
	for(int i = 0; i < n; i++){
		G[i] = new node(i);
	}
	for(int i = 0; i < q; i++){
		int t;
		cin >> t;
		if(t == 2){
			int v,l,r,w;
			cin >> v >> l >> r >> w;
			v--;
			l--;
			r--;
			for(int j = l; j <= r; j++){
				int found = -1;
				for(int n = 0; n < G[v]->list.size();n++){
					if(G[v]->list[n].first == G[j]){
						found = n;
					}
				}
				if(found == -1){
					G[v]->list.push_back({G[j],w});
				}else if(G[v]->list[found].second>w){
					G[v]->list[found].second = w;	
				}
			}
		}else if(t == 3){
			int v,l,r,w;
			cin >> v >> l >> r >> w;
			v--;
			l--;
			r--;
			for(int j = l; j <= r; j++){
				int found = -1;
				for(int n = 0; n < G[j]->list.size();n++){
					if(G[j]->list[n].first == G[v]){
						found = n;
					}
				}
				if(found == -1){
					G[j]->list.push_back({G[v],w});
				}else if(G[j]->list[found].second>w){
					G[j]->list[found].second = w;	
				}
			}
		}else{
			int v,u,w;
			cin >> v >> u >> w;
			v--;
			u--;
			//G[v][u] = w;
			int found = -1;
			for(int n = 0; n < G[v]->list.size();n++){
				if(G[v]->list[n].first == G[u]){
					found = n;
				}
			}
			if(found == -1){
				G[v]->list.push_back({G[u],w});
			}else if(G[v]->list[found].second>w){
				G[v]->list[found].second = w;	
			}
		}
	}	
	vector<long long> ans = dijkstra(G,s);
	for(auto i: ans){
		if(i == INT_MAX){
			cout << -1 << " ";
		}else{
			cout << i << " ";
		}
	}
	cout << endl;
}
