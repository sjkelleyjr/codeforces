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
	int k,w;
	long long n;
	cin >> k >> n >> w;
	int o_k = k;
	for(int i = 1; i <= w;i++){
		n -= k;
		k += o_k;
	}
	if(n > 0){
		cout << 0 << endl;
	}else{
		cout << n*-1 << endl;
	}
}


// 3,6,9,12...
//14,8,-1,-13
