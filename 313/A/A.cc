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
	if(n > 0){
		cout << n << endl;
		return 0;
	}
	long long first = floor(n/10);
	int last = n%10;
	long long second = floor(n/100)*10 + last;
	if(first > second){
		cout << first << endl;
	}else{
		cout << second << endl;
	}
}
