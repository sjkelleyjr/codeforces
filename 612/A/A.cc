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
	int n,p,q;
	cin >> n >> p >> q;
	string s;
	cin >> s;
	vector<string> subs1;
	vector<string> subs2;
	int counterP = 0;
	int counterQ = 0;
	while(counterP < s.length()){
		subs1.push_back(s.substr(counterP, p));
		counterP += p;
	}
	while(counterQ < s.length()){
		subs2.push_back(s.substr(counterQ,q));
		counterQ += q;
	}
	bool subs1L = true;
	bool subs2L = true;
	for(auto i: subs1){
		if(!(i.length() == p || i.length() == q)){
			subs1L = false;
		}
	}
	for(auto i: subs2){
		if(!(i.length() == p || i.length() == q)){
			subs2L = false;
		}
	}
	if(subs1L){
		cout << subs1.size() << endl;
		for(auto i: subs1){
			cout << i << endl;
		}
		return 0;
	}
	if(subs2L){
		cout << subs2.size() << endl;
		for(auto i: subs2){
			cout << i << endl;
		}
		return 0;
	}
	cout << -1 << endl;
	return 0;
}
