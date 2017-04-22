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
	int m, d;
	cin >> m >> d;
	unordered_map<int,int> ma;
	ma[1] = 31;
	ma[3] = 31;
	ma[5] = 31;
	ma[7] = 31;
	ma[8] = 31;
	ma[10] = 31;
	ma[12] = 31;
	ma[2] = 28;
	ma[4] = 30;
	ma[6] = 30;
	ma[9] = 30;
	ma[11] = 30;
	int days = ma[m];
	days -= (8-d);
	int count = 0;
	while(days>0){
		days -= 7;
		count++;
	}
	cout << count+1 << endl;
}
