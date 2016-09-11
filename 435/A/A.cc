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

int main() 
{
	int n,m;
	cin >> n >> m;
	int numPeople = 0;
	int ans = 1;
	for(int i = 0; i < n;i++){
		int a;
		cin >> a;
		if(numPeople+a <= m){
			numPeople += a;
		}else{
			ans++;
			numPeople = a;
		}
	}
	cout << ans << endl;
}

