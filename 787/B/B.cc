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


vector<map<int,int> > vec;
bool findOpposite(int i){
	bool found = false;
	//one needs to exist in every other universe, not just one other
	//what about this universe???
	for(auto ele : vec[i]){
		int numFound = 0;
		for(int j = 0; j < vec.size();j++){
			//if(j == i) continue;
			if(vec[j].count(-ele.first)){
				numFound++;
			}
		}
		if(numFound >= vec.size()-1){
			found = true;
		}
	}
	return found;
}

void checkUniverses(){
	bool safe = false;
	for(int i = 0; i< vec.size();i++){
		if(findOpposite(i)){
			safe = true;
		}
	}
	if(!safe){
		cout << "YES" << endl;
		return;
	}
	cout << "NO" << endl;
	return;
}

int main() 
{
	int n, m;
	cin >> n >> m;
	for(int i = 0; i < m;i++){
		int k;
		cin >> k;
		//if k is 1, we should return YES immediately
		if(k == 1){
			cout << "YES" << endl;
			return 0;
		}
		map<int,int> m;
		for(int j = 0; j < k; j++){
			int v;
			cin >> v;
			m[v] = -v;
		}
		vec.push_back(m);
	}
	//if 1 opposite is found in every other group
	//then we're safe, else we've not
	checkUniverses();
}
