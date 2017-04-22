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
	cin >> n;
	for(long long i = 0; i< n;i++){
		long long a;
		cin >> a;
	}
	long long count = 0;
	for(long long i = 0; i< n;i++){
		long long a;
		cin >> a;
		if(a == 0){
			count++;
		}
	}
	cout << pow(2, count) << endl;
}
