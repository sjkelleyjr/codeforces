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

long divisors(long d){
	long ds = 1;
	long double sd = sqrt(d);
	int w;
	for(w = 2; w < sd; w++){
		if(d % w == 0){
			ds++;
		}
	}
	ds = ds*2;
	if(w*w == d){
		ds++;
	}
	return ds;
}


int main() 
{
	const long long M = 1073741824;
	int a,b,c;
	cin >> a >> b >> c;
	long long sum  = 0;
	map<long,long long> d_score;
	for(int i = 1; i<=a; i++){
		for(int j = 1; j <= b;j++){
			for(int k = 1; k <= c;k++){
				long d = i*j*k;
				if(d_score.find(d) != d_score.end()){
					sum += d_score[d];
				}else{	
					long ds = divisors(d);
					sum += ds;
					d_score[d] = ds;
				}
			}
		}
	}
	cout << --sum%M << endl;	
}

