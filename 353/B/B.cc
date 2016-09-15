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
	vector<int> arr[205];
	map<int,int> count;
	for(int i = 0; i<2*n;i++){
		int b;
		cin >> b;
		arr[b].push_back(i);
		count[b]++;
	}
	multimap<int,int, greater<int> > mm;
	for(auto i : count){
		mm.insert(make_pair(i.second,i.first));
	}
	int ans[205];
	set<int> k[2];
	int swi = 0;
	for(auto i : mm){
		int num = i.second;
		for(int j = 0; j < arr[num].size();j++){
			ans[arr[num][j]] = swi+1;
			k[swi].insert(num);
			swi^=1;
		}
	}
	cout << k[0].size() * k[1].size() << endl;
	for(int i = 0; i<2*n;i++){
		cout << ans[i] << " ";
	}
}

