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
	string wub = "WUB";
	vector<int> indices;
	int pos = s.find(wub);
	vector<string> ans;
	while(pos != string::npos){
		if(pos == 0){
			s.erase(pos,3);
		}else{
			//cout << s.substr(0,pos) << endl;
			//ans.push_back(s.substr(0,pos));
			s.replace(pos,3," ");
		}
		pos = s.find(wub);
	}
	for(int i = 1; i < s.length();i++){
		if(s[i-1] == ' ' && s[i] == ' '){
			s.replace(i-1,2," ");	
		}
	}
	cout << s << endl;
}

