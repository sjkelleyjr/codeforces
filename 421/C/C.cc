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

class lg{
public:
	char v;
	int x;
	lg(char c, int xx) : v(c), x(xx){}
};


int main() 
{
	int n,m;
	cin >> n >> m;
	set<int> people;
	for(int i = 1; i <= n;i++){
		people.insert(i);
	}
	set<int> chat;
	vector<lg> l;
	vector<bool> X(n, false);
	int l1 = -1;
	int l2 = -1;
	for(int i = 0; i < m;i++){
		char c;
		int p;
		cin >> c >> p;
		if(i == 0){
			l1 = p;
		}
		if(c == '-'){
			if(!X[p]){
				l2 = p;
			}
		}
		people.erase(p);
		lg ll(c,p);
		l.push_back(ll);
		X[p] = true;
	}
	for(auto ll: l){
		if(ll.v == '+'){
			chat.insert(ll.x);
		}else{
			chat.erase(ll.x);
		}
		if(chat.size() == 1){
			if(l2 == -1 && *chat.begin() == l1){
				people.insert(l1);
			}else if(l2 == *chat.begin()){
				people.insert(l2);
			}
		}
	}
	cout << people.size() << endl;
	for(auto i: people){
		cout << i << " ";
	}
}
