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
	int n, k;
	cin >> n >> k;
	if(n < 2*k + 1){
		cout << -1 << endl;
		return 0;
	}
	printf("%d\n",n*k);
	for(int i = 1; i <= n;i++){
		for(int j = 0; j < k;j++){
			printf("%d %d\n", i, ((i+j)%n)+1);
                	//cout << i << " "  << ((i+j)%n)+1 << endl;
		}
	}	
}
