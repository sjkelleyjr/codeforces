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
	int n;
	long c;
	cin >> n >> c;
	int arr[n];
	for(int i =0 ; i<n;i++){
		int t;
		cin >> t;
		arr[i] = t;
	}
	if(n == 1){
		cout << 1 << endl;
		return 0;
	}
	int count = 1;
	for(int i = 1; i < n;i++){
		count++;
		if((arr[i] - arr[i-1]) > c){
			count = 0;
			count++;
		}
	}
	cout << count << endl;
}

