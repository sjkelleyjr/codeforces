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
	//push openers on stack, if the parent is a closer, check the top of the stack, if it's an opener, and different than me, increase the count, if its not an opener cout Impossible and return
	string s;
	cin >> s;
	stack<char> st;
	long long count = 0;
        for(int i = 0; i < s.length();i++){
        	if(s[i] == '<' || s[i] == '(' || s[i] == '{' || s[i] == '['){
			st.push(s[i]);
		}else{
			if(st.empty()){
				cout << "Impossible" << endl;
				return 0;
			}
			if(s[i] == '>' && st.top() == '<'){
				st.pop();
			}else if(s[i] == ')' && st.top() == '('){
				st.pop();
			}else if(s[i] == '}'  && st.top() == '{'){
				st.pop();
			}else if(s[i] == ']' && st.top() == '['){
				st.pop();
			}else{
				count++;
				st.pop();
			}
		}
	}
	if(!st.empty()){
		cout << "Impossible" << endl;
		return 0;
	}
	cout << count << endl;
}
