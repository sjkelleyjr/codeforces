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

vector<int> result;



class node{
public:
	int x,i;
	vector<node*> list;
	node(int i): i(i){}
	//g is grandparent, f is parent
	void dfs(node* p, int f, int g){
		int e = g ^ x;
		if(e){
			result.push_back(i+1);
		}
		for(auto v: list){
			if(v != p){
				v->dfs(this, e ^ g, f);
			}	
		}
	}	
};


int main() 
{
	int n;
	cin >> n;
	vector<node*> V;
	for(int i = 0; i < n;i++){
		V.push_back(new node(i));
	}
	for(int i = 0; i < n-1;i++){
		int ii, j;
		cin >> ii >> j;
		ii--;
		j--;
		V[ii]->list.push_back(V[j]);
		V[j]->list.push_back(V[ii]);
	}
	for(int i = 0; i < n; i++){
		int num;
		cin >> num;
		V[i]->x = num;
	}
	
	for(int i = 0; i < n; i++){
		int num;
		cin >> num;
		V[i]->x ^= num;
	}	
	V[0]->dfs(NULL,0,0);
	cout << result.size() << endl;
	for(auto i: result){
		cout << i << endl;
	}
}
