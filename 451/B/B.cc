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
	long n;
	cin >> n;
	long arr[n];
	long b[n];
	for(long i= 0; i < n;i++){
		long a;
		cin >> a;
		arr[i] =  a;
		b[i] = a;
	}
	map<int,int> m;
	sort(b,b+n);
	//map vals to where they should be in the sorted array.
	for(long i = 0; i<n;i++){
		m[b[i]] = i;
	}
	
	for(long i = 0; i < n;i++){
		arr[i] = m[arr[i]];
	}
	long L = -1;
	//if there is a position that isn't sorted.
	for(long i = 0; i < n;i++){
		if(arr[i] != i){
			L = i;
			break;
		}
	}
	int R = -1;
	for(int i = n-1; i >= 0;i--){
		if(arr[i] != i){
			R = i;
			break;
		}
	}
	//if the array is sorted already.
	if(L == -1 || R == -1){
		cout << "yes" << endl;
		cout << 1 << " " << 1 << endl;
	}else{
		reverse(arr + L, arr + R + 1);
		bool sorted = true;
		for(long i = 0; i < n;i++){
			if(arr[i] != i){
				sorted = false;
			}
		}
		if(sorted){
			cout << "yes" << endl;
			cout << L+1 << " " << R+1 << endl;
		}else{
			cout << "no" << endl;
		}
	}
}

