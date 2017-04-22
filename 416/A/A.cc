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
	string s;
	//find the largest possible bounds
	//it's really just a max min problem
	long maximum = INT_MAX;
	long minimum = INT_MIN;
	for(int i = 0; i < n;i++){
		string b;
		long val;
		char ans;
		cin >> b >> val >> ans;
		if(ans == 'N'){
			if(b == ">=") b = "<";
			else if( b == "<" ) b = ">=";
			else if(b == "<=") b = ">";
			else b = "<=";
		}	
		if(b == ">="){
			minimum = max(minimum, val);
		}else if(b == ">"){
			minimum = max(minimum,val+1);
		}else if(b == "<="){
			maximum = min(maximum, val);
		}else{
			maximum = min(maximum, val-1);
		}
	}
	if(minimum == INT_MIN){
		cout << -1998638045 << endl;
		return 0;
	}
	if(maximum == INT_MAX){
		cout << 1998638045 << endl;
		return 0;
	}
	//cout << "MAX:" << maximum << " MIN: " << minimum << endl;
	if(maximum < minimum){
		cout << "Impossible" << endl;
		return 0;
	}
	if(maximum == minimum){
		cout << maximum << endl;
	}else{
		cout << minimum << endl;
	}

}
