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
	int xSum(0), ySum(0);
	bool x_odd(0), y_odd(0),rotate(0);
	int ans = 0;
	for(int i = 0; i<n;i++){
		int x,y;
		cin >> x >> y;
		x_odd = x%2;
		y_odd = y%2;
		xSum ^= x_odd;
		ySum ^= y_odd;
		if(x_odd ^ y_odd){
			rotate = true;
		}
	}
	if(!xSum && !ySum){
		cout << 0 << endl;
	}else if(xSum && ySum && rotate){
		cout << 1 << endl;
	}else{
		cout << -1 << endl;
	}
}

