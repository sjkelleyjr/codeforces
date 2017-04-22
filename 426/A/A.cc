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
	//if there exists a sum of two numbers that is <= the cap yes, else no
	int n,cap;
	cin >> n >> cap;
	int maxCup = INT_MIN;
	int currSum = 0;
	for(int i = 0; i< n;i++){
		int c;
		cin >> c;
		maxCup = max(maxCup,c);
		currSum += c;
	}
	if(currSum - maxCup <= cap){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
}
