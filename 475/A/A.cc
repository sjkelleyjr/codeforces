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
	int k;
	cin >> k;
	vector<string> levels(4);
	string level1, level2, level3, level4;
	levels[0] = "|#.#.#.#.#.#.#.#.#.#.#.|D|)";
	levels[1] = "|#.#.#.#.#.#.#.#.#.#.#.|.|";
	levels[2] = "|#.......................|";
	levels[3] = "|#.#.#.#.#.#.#.#.#.#.#.|.|)";
	//cout << "+------------------------+" << endl;
	for(int j = 1; j < 22; j += 2){
		for(int i = 0; i < 4; i++){
			if(levels[i][j] == '#' && k > 0){
				levels[i][j] = 'O';
				k--;
			}
		}
	}
	
	cout << "+------------------------+" << endl;
	for(auto i: levels){
		cout << i << endl;
	}
	cout << "+------------------------+" << endl;
}
