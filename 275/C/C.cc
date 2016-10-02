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
	long long n;
	long long k;
	cin >> n >> k;
	long long arr[n];
	for(long long i =0 ; i< n;i++){
		long long a;
		cin >> a;
		arr[i] = a;
	}
	sort(arr, arr+n);
	set<long long> s;
	for(long long i =0 ; i< n;i++){
		//cout << arr[i];
		if(arr[i]%k != 0){
			cout << "adding: " << arr[i] << endl;
			s.insert(arr[i]);
		}else{
			cout << "adding: " << arr[i]/k << endl;
			s.insert(arr[i]/k);
		}
	}
	cout << endl;
	cout << endl;	
	cout << s.size() << endl;
}

