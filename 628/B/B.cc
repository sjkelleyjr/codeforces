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
	long long count = 0;
	for(int i = 0; i< s.length();i++){
		int first = s[i] - '0';
		if(first % 4 == 0){
			count++;
		}
		if(i){
			int pd = s[i-1] - '0';
			if((pd*10 + first) %4 == 0){
				count += i;
			}
		}
	}
	cout << count << endl;
}
