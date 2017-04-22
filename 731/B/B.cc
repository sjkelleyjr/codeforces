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
	cin >> n;
	int subsequenceSum = 0;
	int maxSub = INT_MIN;
	for(int i = 0; i<n;i++){
		int a;
		cin >> a;	
		if(a == 0){
			maxSub = max(maxSub, subsequenceSum);
			subsequenceSum = 0;
		}else{
			subsequenceSum += a;
		}
	}

	if(maxSub % 2 == 0){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
}
