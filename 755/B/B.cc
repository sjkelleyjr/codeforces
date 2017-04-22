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
	int p;
	int e;
	cin >> p;
	cin >> e;
	vector<string> pB(p);
	vector<string> eB(e);
	vector<string> inter;
	for(int i = 0; i< p;i++){
		string word;
		cin >> word;
		pB[i] = word;
	}
	for(int i = 0; i< e;i++){
		string word;
		cin >> word;
		eB[i] = word;
	}
	sort(pB.begin(),pB.end());
	sort(eB.begin(),eB.end());
	set_intersection(pB.begin(),pB.end(), eB.begin(), eB.end(),back_inserter(inter));
	pB.erase(set_difference(pB.begin(), pB.end(),inter.begin(),inter.end(),pB.begin()),pB.end());
	eB.erase(set_difference(eB.begin(), eB.end(),inter.begin(),inter.end(),eB.begin()),eB.end());
	//for(auto i: eB){
	//	cout << i << " ";
	//}	
	//cout << endl;
	//for(auto i : pB){
	//	cout << i << " ";
	//}
	//cout << endl;
	//cout << inter.size() << endl;
	if((eB.size() ==  pB.size()) && inter.size()%2 == 0){
		cout << "NO" << endl;
		return 0;
	}else if(eB.size() == pB.size()){
		cout << "YES" << endl;
		return 0;
	}
	if(eB.size() > pB.size()){
		cout << "NO" << endl;
	}else{
		cout << "YES" << endl;
	}
	
}
