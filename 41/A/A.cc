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
	string s,t;
	cin >> s >> t;
	stack<char> st;
	for(int i =0 ; i< s.length();i++){
		st.push(s[i]);
	}
	bool isRev = true;
	int i = 0;
	while(!st.empty()){
		char top = st.top();
		st.pop();
		if(top != t[i]){
			isRev = false;
		}
		i++;
	}
	if(isRev){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
}

