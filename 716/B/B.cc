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


string s;



bool isValid(int cCount[]){
	for(int i  =0 ; i<26;i++){
		if(cCount[i] >= 2){
			return false;
		}
	}
	return true;
}

void fill(){
	for(int i =0 ; i< s.length();i++){
		if(s[i] == '?'){
			s[i] = 'Z';
		}
	}

}


int main() 
{
	cin >> s;
	int charCount[26];
	if(s.length() < 26){
		cout << -1;
		return 0;	
	}
	for(int i =25; i< s.length();i++){
		memset(charCount, 0, sizeof(charCount));
		for(int j = i; j >= i-25;j--){
			charCount[s[j]-'A']++;
		}
		if(isValid(charCount)){
			int t = 0;
			while(charCount[t] > 0){
				 t++;
			}
			for(int j =  i - 25; j <= i;j++){
				if(s[j] == '?'){
					s[j] = t + 'A';
					t++;
					while(charCount[t] > 0){
						t++;
					}
				}
			}
			fill();
			cout << s << endl;
			return 0;
		}	
	}
	cout <<-1;
	return 0;
}

