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
	int n;
	cin >> n;
	char arr[n+1];
	int lenCount = 0;
	int wCount = 0;
	int inParenUnderCount = 0;
	for(int i =0 ; i< n;i++){
		char c;
		cin >> c;
		arr[i] =  c;
	}
	arr[n] = '_';
	int brackets = 0;
	string currentWord = "";
	string maxWord = "";
	for(int i = 0; i< n;i++){
		while(arr[i] != '(' && arr[i] != ')' && arr[i] != '_'){
			currentWord += arr[i];
			i++;
		}
		cout << currentWord << endl;
		if(arr[i] == '('){
			brackets++;
		}

		if(brackets == 0){
			if(currentWord.length() > maxWord.length()){
				cout << "setting new max" << endl;
				maxWord = currentWord;
			}
		}
		currentWord = "";
		if(arr[i] == ')'){
			brackets--;
		}

		cout << brackets << endl;
		if(currentWord != "" && brackets == 1){
			wCount++;
		}
	}
	cout << endl;	
	cout << maxWord.length() << " " << wCount;
}

