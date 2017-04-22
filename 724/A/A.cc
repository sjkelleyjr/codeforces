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
	long long n,m,k;
	cin >> n >> m >> k;
	//array of coordinates
	long long arr[k][1];
	for(long long i = 0; i < k; i++){
		long long x,y;
		cin >> x >> y;
		arr[i][0] = x;
		arr[i][1] = y;	
	}
	for(int i = 0; i< k ;i++){
		cout << arr[i][0] << " " << arr[i][1] << endl;
	}
}

