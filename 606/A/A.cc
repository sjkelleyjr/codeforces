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
	int a, b, c;
	cin >> a >> b >> c;
	int x,y,z;
	cin >> x >> y >> z;
	if(a >= x && b >= y && c >= z){
		cout << "Yes" << endl;
		return 0;
	}
	int have = 0;
	if(a > x){
		have += floor((a-x)/2);
	}
	if(b > y){
		have += floor((b-y)/2);
	}
	if(c > z){
		have += floor((c-z)/2);
	}
	int need = 0;
	if(a < x){
		need += x-a;
	}
	if(b < y){
		need += y-b;
	}
	if(c < z){
		need += z-c;
	}
	if(have >= need){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}
}
