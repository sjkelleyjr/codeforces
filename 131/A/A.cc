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
	bool allCap = true;
	bool firstCap = true;
	vector<char> fixedString;
	for(int i = 0; i< s.length();i++){
		if(i == 0 && islower(s[i])){
			fixedString.push_back(toupper(s[i]));
			firstCap = false;
		}else if(islower(s[i])){
			fixedString.push_back(toupper(s[i]));
			allCap = false;
		}else{
			fixedString.push_back(tolower(s[i]));
		}
	}
	if((allCap && !firstCap) || allCap){
		cout << string(fixedString.begin(),fixedString.end()) << endl;
	}else{
		cout << s << endl;
	}
}

