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

class w{
public:
	int i, a, b;
	w(int i, int a){
		this->i = i;
		this->a = a;
	}
	w(){}
};


int query(vector<int> &fTree, int i){
	int m = 0;
	while(i >= 0){
		m = max(fTree[i],m);
		i &= i + 1;
		i--;
	}
	return m;
}


void insert(vector<int> &fTree, int i, int num){
	while(i < fTree.size()){
		fTree[i] = max(num, fTree[i]);
		i |= i+1;
	}
}



int main() 
{
	int n;
	cin >> n;
	vector<w> wals(n);
	for(int i = 0; i< n;i++){
		int a;
		cin >> a;
		w wal(i+1,a);
		wals[i] = wal;
	}
	//sort them on age
	sort(wals.begin(),wals.end(),[](w w1, w w2)->bool{return w1.a < w2.a;});
	
	//b is essentially a dp table of some kind, need to investigate further 
	wals[0].b = 1;
	for(int i = 1; i< n;i++){
		wals[i].b = wals[i-1].b + (wals[i].a == wals[i-1].a ? 0 : 1);
	}
	//this is some kind of maximum
	int m = wals[n-1].b;
	//put the walruses back into order
	sort(wals.begin(),wals.end(), [](w w1, w w2)->bool{return w1.i < w2.i;});
	vector<int> dist(n);
	vector<int> fTree(n);
	for(int i = n-1; i >= 0; i--){
		int m = query(fTree, wals[i].b - 1);
		dist[i] = (m == 0) ? -1 : m - wals[i].i - 1;
		insert(fTree,wals[i].b, wals[i].i);
	}
	for(auto i: dist){
		cout << i << " ";
	}		

	cout << endl;
}
