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

class walrus{
public:
	int a,b,i;
	walrus(int a, int i){
		this->a = a;
		this->i = i;
	}
	walrus(){}
};

int query(vector<int>&fTree, int i){
	int MAX = 0;
	while(i >= 0){
		MAX = max(MAX, fTree[i]);
		i &= i+1;
		i--;
	}
	return MAX;
}


void insert(vector<int>&fTree, int i, int num){
	while(i < fTree.size()){
		fTree[i] = max(fTree[i],num);
		i |= i+1;
	}
}



int main() 
{
	int n;
	cin >> n;
	vector<walrus> w(n);
	for(int i = 0; i< n;i++){
		int a;
		cin >> a;
		walrus wal(a,i+1);
		w[i] = wal;
	}
	sort(w.begin(),w.end(),[](walrus a, walrus b)->bool{return a.a < b.a;});
	//get age ranking
	w[0].b = 1;
	for(int i = 1; i<n;i++){
		w[i].b = w[i-1].b + (w[i-1].a == w[i].a ? 0 : 1);
	}
	int m = w[n-1].b;
	sort(w.begin(),w.end(),[](walrus a, walrus b)->bool{return a.i < b.i;});
	vector<int> fTree(n);
	vector<int> dist(n);
	for(int i = n-1;i >= 0;i--){
		int m = query(fTree, w[i].b-1);
		dist[i] = (m == 0) ? -1 : m - w[i].i - 1;
		insert(fTree, w[i].b,w[i].i); 
	}
	for(auto i: dist){
		cout << i << " ";
	}
}
