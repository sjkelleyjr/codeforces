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
	//I only followed the first sequence here
	//I did get the plus n at the end though
	//cout << n*(n-1) + n-1 << endl;
	int ans = 0;
	for(int i = 1; i< n;i++){
		ans += (n-i)*i; //it takes i presses to get to this guess
				//then n-i guesses
	}
	ans += n; //at the end you have to press the n buttons to unlock after you've guessed the sequence
	cout << ans << endl;
}

