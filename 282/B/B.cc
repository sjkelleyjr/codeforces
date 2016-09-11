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
	scanf("%ld",&n);
	int diff = 0;
	int A,G;
	for(long i = 0;i < n;i++){
		scanf("%d %d",&A,&G);
		if(diff+A <= 500){
			diff+=A;
			cout <<  'A';
		}else{
			diff-=G;
			cout << 'G';
		}	
	}
	cout << endl;
}
