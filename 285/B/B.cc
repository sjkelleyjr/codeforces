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
	long long n,s,t;
	cin >> n >> s >> t;
	s--;
	t--;
	long long arr[n];
	for(int i =0 ; i < n;i++){
		long long p;
		cin >> p;
		arr[i] = p;
	}
	int pos = s;
	int path = 0;
	if(s == t){
		cout << 0;
		return 0;
	}
	while(path < n){
		if(pos == t){
			break;
		}
		pos = arr[pos]-1;
		path++;
	}
	if(path == n){
		cout << -1;
	}else{
		cout << path;
	}
}

