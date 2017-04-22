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

class city{
public:
	long long x,y,pop;
	city(){}
	city(long long x, long long y, long long pop):x(x),y(y),pop(pop){}
	long double dist(){
		return (long double) sqrt(x*x + y*y);
	}
};

int main() 
{
	long long n, s;
	cin >> n >> s;
	vector<city*> c(n);
	for(int i = 0; i < n;i++){
		long long x,y,p;
		cin >> x >> y >> p;
		c[i] = new city(x,y,p);
	}

	sort(c.begin(),c.end(), [](city*a, city*b){
		return a->dist() < b->dist();	
	});
	city* ans = NULL;
	long long currTotal = s;
	for(auto i: c){
		currTotal += i->pop;
		if(currTotal >= 10e5){
			ans = i;
			break;
		}
	}
	if(ans != NULL){
		cout.precision(10);
		cout << ans->dist() << endl;
	}else{
		cout << -1 << endl;
	}
}
