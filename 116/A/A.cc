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
	int n,exit,enter;
	cin >> n;
	int max = 0;
	int total = 0;
	for(int i = 0; i<n;i++){
		cin >> exit >> enter;
		total -= exit;
		total += enter;
		if(total > max){
			max = total;
		}
	}
	cout << max << endl;
}

