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
	if(n%4 == 0){
		cout << "YES" << endl;
		return 0;
	}else if(n%7 == 0){
		cout << "YES" << endl;
		return 0;
	}else if(n%47 == 0){
		cout << "YES" << endl;
		return 0;
	}else if(n%74 == 0){
		cout << "YES" << endl;
		return 0;
	}else if(n%447 == 0){
		cout << "YES" << endl;
		return 0;
	}else if(n%474 == 0){
		cout << "YES" << endl;
		return 0;
	}else if(n%744 == 0){
		cout << "YES" << endl;
		return 0;
	}else if(n%774 == 0){
		cout << "YES" << endl;
		return 0;
	}else if(n%477 == 0){
		cout << "YES" << endl;
		return 0;
	}
	cout << "NO" << endl;


	 //4,7,47,74,447,474...
	
	
}

