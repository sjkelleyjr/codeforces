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
	char matrix[2000][2000];
	int a[n];
	for(int i = 0; i<n;i++){
		int a_i;
		cin >> a_i;
		a[i] = a_i;
	}
	//calc points in the matrix +1000
	//put the chars between them
	//how to print?
}

