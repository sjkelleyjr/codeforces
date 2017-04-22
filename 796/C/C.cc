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
	//run the capital move alorithm against this graph
	//master list of all weights in the graph, sorted in decreasing order
	//then sort the adj list for each node, and compare against adj list
	//where my node is plus 0, my neighbors are plus 1 and the rest are plus 2
	//take the maximum of this for each round, and minimize all of these maxes
	//for the answer
}
