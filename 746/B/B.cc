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
	cin >> s;
	string newS;
	for(int i = 0; i< n;i++){
		if(n%2 != 0){
			if(i%2 == 0){
				newS.push_back(s[i]);
			}else{
				newS.insert(0,1,s[i]);
			}
		}else{
			if(i%2 == 0){
				newS.insert(0,1,s[i]);
			}else{
				newS.push_back(s[i]);
			}
		}
	}
	cout << newS << endl;

}
