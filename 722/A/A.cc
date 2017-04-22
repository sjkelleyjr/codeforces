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


void split(const std::string &s, char delim, std::vector<std::string> &elems) {
    std::stringstream ss;
    ss.str(s);
    std::string item;
    while (std::getline(ss, item, delim)) {
        elems.push_back(item);
    }
}

int main() 
{
	int type;
	cin >> type;
	string s;
	cin >> s;
	vector<string> time;
	split(s,':',time);
	if(time[1][0] - '0' >= 6 || stoi(time[1]) < 0){
		time[1][0] = '0';
	}
	if(type == 24){
		if(stoi(time[0]) > 23 || stoi(time[0]) < 0){
			//fix the hours
		}
	}
	if(type == 12){
		if(stoi(time[0]) > 12 || stoi(time[0]) <= 0){
			//fix the hours		
			
		}
	}
	cout << time[0] << ":" << time[1] << endl;
}

