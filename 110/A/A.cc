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
	string n;
	cin >> n;
	long long cnt = 0;
	for(int i = 0; i<n.length();i++){
		if(n[i] == '4' || n[i] == '7'){
			cnt++;
		}
	}
	string s = to_string(cnt);
	
	bool no = false;
	for(int i = 0; i<s.length();i++){
		if(s[i] == '7' || s[i] == '4'){
		
		}else{
			no = true;
		}
	}
	if(no){
		cout << "NO" << endl;
	}else{
		cout << "YES" << endl;
	}
}

