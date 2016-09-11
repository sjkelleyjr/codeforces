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
	int s;
	cin >> s;
	for(int i = 0; i < 8000;i++){
		set<char> year;
		s++;
		string yString = to_string(s);
		for(int j = 0; j < yString.length();j++){
			year.insert(yString[j]);
		} 
		if(year.size() == 4){
			cout << yString << endl;
			return 0;
		}
		year.erase(year.begin());
	}
}

