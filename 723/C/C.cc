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
	long long arr[n];
	vector<int> changed;
	vector<int> positions;
	for(int i =0 ; i< n;i++){
		long long a;
		cin >> a;
		arr[i] = a;
	}
	for(int i = m; i < n;i++){
		changed.push_back(i);
	}
	for(long long i = 0; i< m;i++){
		if(arr[i] == i){
			positions.push_back(i);
		}
	}
}

