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

class group{
public:
	int people, payment, index;
	group(){}
	group(int people, int payment, int index): people(people), payment(payment), index(index){}
};

class table{
public:
	int index, capacity;
	bool used = false;
	table(){}
	table(int index, int capacity):index(index), capacity(capacity){}
};

int main() 
{
	int n;
	cin >> n;
	vector<group> groups(n);
	for(int i = 0; i < n;i++){
		int c,p;
		cin >> c >> p;
		group gp(c,p,i+1);
		groups[i] = gp;
	}
	sort(groups.begin(),groups.end(),[](group a, group b){ return a.payment > b.payment;});
	//for(auto i: groups){
	//	cout << i.people << " " << i.payment << endl;
	//}
	int tables;
	cin >> tables;
	vector<table> ts(tables);
	for(int i = 0; i < tables;i++){
		int t;
		cin >> t;
		table tab(i+1,t);
		ts[i] = tab;
	}
	sort(ts.begin(),ts.end(), [](table a, table b){return a.capacity < b.capacity;});
	//match back of groups vector, with back of ts vector while still possible
	int resCount = 0;
	long long total = 0;
	vector<pair<int,int> > ans;
	for(auto i: groups){
		for(int j = 0; j < ts.size();j++){
			if(!ts[j].used && i.people <= ts[j].capacity){
				ans.push_back({i.index, ts[j].index});
				ts[j].used = true;
				total += i.payment;
				resCount++;
				break;
			}
		}	
	}
	cout << resCount << " " << total << endl;
	for(auto i: ans){
		cout << i.first << " " << i.second << endl;
	}
	//cout <<"TABLES" << endl;
	//for(auto i: ts){
	//	cout << i << " " ;
	//}
}
