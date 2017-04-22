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
	//if V is in an odd row, he is served by the first attendant
	//if V is in an even row, he is served by the second
	//it takes 7*floor(row/2) in the odd case to get to his row
	//if takes 7*floor((row-1)/2) in the even case to get to his row
	//then just add depending on the letter
	// f + 1, e + 2, etc
}
