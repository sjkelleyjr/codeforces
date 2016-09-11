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
	long long n;
	int t = 0;
	cin >> n;
	map<int,int> m;
	long long ans = 0;
	for(long long i = 0; i< n;i++){
		cin >> t;
		m[t]++;
	}
	for(auto i: m){
		if(i.first == 0){
			ans += i.second*(i.second-1)/2;	
		}else{
			ans += i.second*m[-i.first];
			m[i.second] = 0;
			m[-i.first] = 0;
		}
	}
	cout << ans << endl;
}

