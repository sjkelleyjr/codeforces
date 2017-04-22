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
	long double sum = 0;
	for(int i = 0; i< n;i++){
		long double p;
		cin >> p;
		sum += p;
	}
	cout << fixed;
	cout << setprecision(12) << sum/n << endl;
}
