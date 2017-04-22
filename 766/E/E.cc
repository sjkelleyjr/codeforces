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


long long ct;

class node{
public:
	//k0 is number of even number of 1s in the path, ending here
	//k1 is how many paths of odd number, ending here
	int a, b;
	long long k0, k1;
	vector<node*> list;
	node(int a): a(a){}
	void dfs(node* p){
		k1 =  b;
		k0 = 1-b;
		//I'm a leaf
		if(p && list.size() == 1){
			//base case
			ct += k1;
			return;
		}
		long long s0 = 0;
		long long s1 = 0; //bug number 1
		for(auto v : list){
			if(v != p){
				v->dfs(this);
				s0 += v->k0;
				s1 += v->k1;
			}
		}
		ct += k1;
		if(!b){
			k0 += s0;
			k1 += s1;
			ct += s1;
		}else{
			k0 += s1;
			k1 += s0;
			ct += s0;
		}
		long long x = 0;
		for(auto v : list){
			if(v != p){
				if(!b){
					//add the paths of one 0 to another just to double count so we can divide by 2 at the end
					x += v->k0 * (s1 - v->k1) +  v->k1 * (s0 - v->k0);
				}else{
					//we're double counting paths from one 0 to another, so we added that to the !b case above
					x += v->k0 * (s0 - v->k0) + v->k1 *(s1 - v->k1);
				}
			}
		}
		//k1 and k0 and the number of paths ENDING here, not going through it
		ct += x/2;
	}
};

int main() 
{
	int n;
	cin >> n;
	vector<node*> V;
	for(int i = 0; i < n;i++){
		int a;
		cin >> a;
		if(n == 1){
			cout << a << endl;
			return 0;
		}
		V.push_back(new node(a));
	}
	for(int h = 0; h < n - 1; h++){
		int i, j;
		cin >> i >> j;
		i--;
		j--;
		V[i]->list.push_back(V[j]);
		V[j]->list.push_back(V[i]);
	}
	long long sumBit = 0;
	//for each bit position
	for(int k = 0; k < 20;k++){
		//set the bit for each node
		for(int i = 0; i < n;i++){
			V[i]->b = (V[i]->a & 1 << k) > 0 ? 1 : 0;
		}
		ct = 0;
		V[0]->dfs(NULL);
		//have to scale for each bit for the sum
		sumBit += ct << k;
	}
	cout << sumBit << endl;
}
