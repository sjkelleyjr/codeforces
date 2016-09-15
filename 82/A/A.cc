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
	long long n;
	cin >> n;
	string names[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
	int r = 1;
	while(r*5 < n){
		n -= r*5;
		r *= 2;
	}
	cout << names[(n-1)/r] << endl;
}

