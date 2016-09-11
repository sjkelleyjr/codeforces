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
	int n;
	cin >> n;
	priority_queue<int> pq_first,pq_sec;
	for(int i = 0; i<n;i++){
		char num;
		cin >> num;
		int n = num - '0';
		pq_first.push(n);
	}
	for(int i = 0; i<n;i++){
		char num;
		cin >> num;
		int n = num - '0';
		pq_sec.push(n);
	}
	vector<bool> allLess;
	vector<bool> allGreater;	
	while(!pq_first.empty()){
		bool less = false;
		bool greater = false;
		int first = pq_first.top();
		pq_first.pop();
		int sec   = pq_sec.top();
		pq_sec.pop();
		if(first < sec){
			less = true;
		}else if(first > sec){
			greater = true;
		}
		allLess.push_back(less);
		allGreater.push_back(greater);
	}
	bool aL = true;
	bool aG = true;
	for(int i = 0; i <allLess.size();i++){
		if(!allLess[i]){
			aL = false;
		}
		if(!allGreater[i]){
			aG = false;
		}
	}
	if(aL || aG){
		cout << "YES";
	}else{
		cout << "NO";
	}
}

