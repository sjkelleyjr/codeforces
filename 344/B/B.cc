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
	long long a,b,c;
	cin >> a >> b >> c;
	map<int,int> m;
	if((a+b+c)%2!=0){
		cout << "Impossible" << endl;
		return 0;
	}
	for(int i = 0; i <= a;i++){
		long long y = b-i;
		long long z = a-i;
		if((i+z) == a && (i+y) == b && (z+y) == c && i >= 0 && y >= 0 && z >= 0){
			cout << i << " " << y << " " << z;
			return 0;
		}
	}
	cout << "Impossible" << endl;
}

