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
	cin  >> n;
	int x_vec(0),y_vec(0),z_vec(0);
	for(int i = 0; i<n;i++){
		int x,y,z;
		cin >> x >> y >> z;
		x_vec += x;
		y_vec += y;
		z_vec += z;
	}
	if(x_vec == 0 && y_vec == 0 && z_vec == 0){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
}

