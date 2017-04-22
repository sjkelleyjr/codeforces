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
	int n;
	cin >> n;
	vector<int> p(n);
	vector<int> b(n);
	for(int i = 0; i < n;i++){
		cin >> p[i];
		p[i]--;
	}
	for(int i = 0; i < n;i++){
		cin >> b[i];
	}
	vector<bool> used(n,false);
	int ans = 0;
	//could change it such that none get rotated?
	//no position is visited rather than all?
	//maybe we need to create cycles in the permutation or somethign?
	for(int i = 0; i < n;i++){
		if(!used[i]){
			ans++;
			//fill positions from this element as a cycle
			for(int j = i; !used[j];j = p[j]){
				used[j] = true;
			}
		}
	}
	//if there is only 1 cycle we don't need to change anything
	if( ans == 1 ){
		ans--;
	}
	int sum;
	sum = accumulate(b.begin(),b.end(),0);
	ans += sum % 2 == 0 ? 1 : 0;
	cout << ans << endl;
}
