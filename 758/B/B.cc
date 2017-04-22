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
	string s;
	cin >> s;
	vector<int> counter(4,0);
	map<char,int> indexMap;
	indexMap['R'] = 0;
	indexMap['B'] = 1;
	indexMap['Y'] = 2;
	indexMap['G'] = 3;
	unordered_map<char,int> m;
	m['R'] = 0;
	m['B'] = 0;
	m['Y'] = 0;
	m['G'] = 0;
	m['!'] = 0;
	//if(s.length() == 4){
	//	for(int i = 0; i<s.length();i++){
	//		m[s[i]]++;	
	//	}
	//	for(auto i: m){
	//		if(i.second == 0){
	//			counter[indexMap[i.first]]++;
	//		}
	//	}
	//	for(auto i: counter){
	//		cout << i << " ";
	//	}
	//	return 0;
	//}
	//for(int i = 0; i< s.length();i++){
	//	if(i >= s.length()/2){
	//		//look before
	//		if(s[i] == '!'){
	//			char c = s[i-4];
	//			if(c == '!') continue;
	//			counter[indexMap[c]]++;
	//			s[i] = c;
	//		}
	//	}else{
	//		//look after
	//		if(s[i] == '!'){
	//			char c = s[i+4];
	//			if(c == '!') continue;
	//			counter[indexMap[c]]++;
	//			s[i] = c;
	//		}
	//	}
	//}
	//for(auto i: counter){
	//	cout << i << " ";
	//}
	if(s.length() == 4){
		for(int i = 0; i<s.length();i++){
			m[s[i]]++;	
		}
		for(auto i: m){
			if(i.second == 0){
				counter[indexMap[i.first]]++;
			}
		}
		for(auto i: counter){
			cout << i << " ";
		}
		return 0;
	}
	for(int i = 0; i < 4;i++){
		m[s[i]]++;
	}
	for(int i = 4; i<s.length();i++){
		if(s[i-4] == '!'){
			for(auto c:m){
				if(c.second == 0){
					counter[indexMap[c.first]]++;
					m[c.first]++;
					m['!']--;
				}
			}
		}
		m[s[i-4]]--;
		m[s[i]]++;
	}	
	for(auto i: counter){
		cout << i << " ";
	}
}
