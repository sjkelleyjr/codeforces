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

int makeRequest(int a_i, int a_j){
	int sum = 0;
	cout << "? " << a_i << " " << a_j;
	cin >> sum;
	return sum;
}


int main() 
{
	string s;	
	cin >> s;
	vector<string> ses;
	vector<char> c;
	for(int i = 0; i< s.length();i++){
		if(isdigit(s[i])||s[i] == '.'){
			c.push_back(s[i]);
		}
	}

}

