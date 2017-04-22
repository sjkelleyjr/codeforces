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
	int a,b;
	int c,d;
	cin >> a >> b;
	cin >> c >> d;
	set<int> screams;
	for(int i = 0; i < 100000;i++){
		screams.insert(b + a*i);
	}
	
	for(int i = 0; i < 100000;i++){
		if(screams.count(d + c*i)){
			cout << d + c*i << endl;
			return 0;
		}
	}
	cout << -1 << endl;
}
