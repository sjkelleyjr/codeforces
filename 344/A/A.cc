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
	long n;
	cin >> n;
	bool plusminus = false;
	long count = 1;
	long arr[n];
	for(long i = 0; i < n;i++){
		int mag;
		cin >> mag;
		arr[i] = mag;
	}
	for(long i = 1; i<n;i++){
		if(arr[i-1] != arr[i]){
			count++;
		}
	}
	cout << count << endl;
}

