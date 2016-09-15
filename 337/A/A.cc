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
	int arr[m];
	for(int i = 0; i<m;i++){
		int f;
		cin >> f;
		arr[i] = f;
	}
	sort(arr,arr+m);
	int minDiff = INT_MAX;
	for(int i = 0; i <= m-n;i++){
		int diff = arr[i+n-1] - arr[i];
		if(diff < minDiff){
			minDiff = diff;
		}
	}
	if(m-n == 0){
		cout << abs(arr[0] - arr[n-1]) << endl;
	}else{
		cout << minDiff << endl;
	}
}

