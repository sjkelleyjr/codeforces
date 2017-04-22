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
	int n,m, mi, ma;
	cin >> n >> m >> mi >> ma;
	int currMin = INT_MAX;
	int currMax = INT_MIN;
	for(int i = 0; i < m;i++){
		int a;
		cin >> a;
		currMin = min(a,currMin);
		currMax = max(a,currMax);
	}
	if(currMin < mi || currMax > ma){
		cout << "Incorrect" << endl;
		return 0;
	}
	int need = currMax == ma ? 0 : 1;
	need += currMin == mi ? 0 : 1;
	if(need > n - m){
		cout << "Incorrect" << endl;
	}else{
		cout << "Correct" << endl;
	}
	
}
