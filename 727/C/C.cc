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

int makeRequest(int a_i, int a_j){
	string sum;
	cout << "? " << a_i << " " << a_j;
	fflush(stdout);
	getline(cin,sum);
	getline(cin, sum);
	cout << sum;
	return 1000;
}


int main() 
{
	int n;
	cin >> n;
	int arr[n];
	int sum = makeRequest(1,5);
	cout << sum << endl;
}

