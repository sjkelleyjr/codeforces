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
	int hh, mm;
	string s;
	cin >> s;
	stringstream ss;
	ss << s;
	ss >> hh;
	ss.get();
	ss >> mm;
	long long a;
	cin >> a;
	//this is how many hours
	long long numHours = a/60;
	//this is how many minutes are left
	long long numMins = a%60;
	if(numMins+mm >= 60){
		numHours++;
	}
	cout << setfill('0') << setw(2) << (hh+numHours)%24 << ":";
	cout << setfill('0') << setw(2) << (mm + numMins)%60 << endl;	
	
}
