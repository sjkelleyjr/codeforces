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

int LSB(string s){
	for(int i = s.length()-1; i>= 0;i--){
		if(s[i] == '1'){
			if(i == s.length()-1){
				return 1;
			}
			return (s.length()-1-i)*2;
		}
	}
}

int sumVector(vector<int> vec){
	int sum = 0;
	for(auto i: vec){
		sum += i;
	}
	return sum;
}



int main() 
{
	long long sum,limit;
	cin >> sum >> limit;
	vector<bitset<8> > set;
	vector<int> sumSet;
	bool foundSum = false;
	for(int i = limit; i > 0;i--){
		sumSet.push_back(LSB(bitset<8>(i).to_string()));	
		set.push_back(bitset<8>(i));
		if(sumVector(sumSet) == sum){
			foundSum = true;
			break;
		}	
	}
	if(!foundSum){
		cout << "-1" << endl;
		return 0;
	}
	cout << set.size() << endl;
	for(auto i: set){
		cout << (int)(i.to_ulong()) << " ";
	}

}

