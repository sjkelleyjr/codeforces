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

int gcd(int num, int k){
	while(k != 0){
		int temp = k;
		k = num % k;
		num = temp;
	}
	return num;
}

int main() 
{
	int a,b,k;
	cin >> a >> b >> k;
	bool turn = false;
	while(k >= 0){
		if(turn){
			k -= gcd(b,k);
			turn = false;
		}else{
			k -= gcd(a,k);
			turn = true;
		}
	}
	cout << turn << endl;
}

