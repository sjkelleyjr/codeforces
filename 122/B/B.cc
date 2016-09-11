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
	string s;
	cin >> s;
	if(s.length() == 0){
		cout << -1 << endl;
		return 0;
	}
	int sCount = 0;
	int fCount = 0;
	for(int i =0 ; i <s.length();i++){
		int n = s[i] - '0';
		if(n == 4){
			fCount++;
		}else if(n==7){
			sCount++;
		}
	}
	if(sCount > fCount){
		cout << 7 << endl;
	}else if(fCount > sCount){
		cout << 4 << endl;
	}else if(sCount == fCount && fCount != 0){
		cout << 4 << endl;
	}else if(sCount == 0 && fCount == 0){
		cout << -1 << endl;
	}
}

