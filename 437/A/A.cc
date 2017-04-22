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
	vector<string> s;
	for(int i = 0; i< 4;i++){
		string ans;
		cin >> ans;
		s.push_back(ans);
	}	
	sort(s.begin(), s.end(), [](string s1, string s2){ return s1.length() < s2.length();});
	for(auto i: s){
		cout << i[0] << " ";
	}
	cout << endl;
	if(s[0].length()-2 < (s[1].length()-2)/2){
		cout << s[0][0] << endl;
		return 0;
	}
	if(s[3].length()-2 > (s[2].length()-2)/2){
		cout << s[3][0] << endl;
		return 0;
	}
	//cout << "C" << endl;
}

