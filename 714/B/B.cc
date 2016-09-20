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
	long long arr[n];
	set<long long> s;
	bool eq = true;
	for(int i = 0; i<n;i++){
		long long a;
		cin >> a;
		arr[i] = a;
		s.insert(a);
	}
	for(int i =0 ; i <n ;i++){
		if(i != n-1){
			if(arr[i] != arr[i+1]){
				eq= false;
			}
		}
	}
	if(eq){
		cout << "YES" << endl;
		return 0;
	}	
	if(s.size() >= 4){
		cout << "NO" << endl;
	}else if(s.size() == 2){
		cout << "YES" << endl;
	}else{
		//there are three distinct numbers
		vector<long long> a;
		for(set<long long>::iterator i = s.begin();i!=s.end();i++){
			a.push_back(*i);
		}
		if(2*a[1] == (a[0]+a[2])){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
}

