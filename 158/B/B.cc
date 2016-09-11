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
	int n,groupSize;
	cin >> n;
	int taxiCount = 0;
	int groupCount[4];
	for(int i = 0; i < 4;i++){
		groupCount[i] = 0;
	}
	//if there is a 4, count++, and move to next number.
	//keep track of 1's so far, 2's so far and 3's so far
	//group 1's and 3's together and 2's together.
	for(int i = 0; i < n;i++){
		cin >> groupSize;
		if(groupSize == 4){
			taxiCount++;
			continue;
		}
		groupCount[groupSize]++;
	}
	taxiCount +=  groupCount[3];
	groupCount[1] -= groupCount[3];
	taxiCount += groupCount[2]/2 + groupCount[2]%2;
	groupCount[1] -= (groupCount[2]%2)*2;
	if(groupCount[1] > 0){
		taxiCount += groupCount[1]/4 + (groupCount[1]%4 > 0);
	}
	cout << taxiCount;
}
