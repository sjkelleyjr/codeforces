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
	int a,b;
	cin >> a >> b;
	int count = a;
	int newCandles = 0;
	int oldCandles = a;
	if(a == b){
		cout << a + 1 << endl;
		return 0;
	}else if(a < b){
		cout << a << endl;
		return 0;
	}
	while(oldCandles >= b){
		newCandles += oldCandles/b;
		oldCandles = oldCandles%b;
		count += newCandles;
		oldCandles += newCandles;
		newCandles = 0;
	}	
	cout << count << endl;
}


