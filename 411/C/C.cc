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
	vector<int> p1(2), p2(2), p3(2), p4(2);
	cin >> p1[0] >> p1[1];
	cin >> p2[0] >> p2[1];
	cin >> p3[0] >> p3[1];
	cin >> p4[0] >> p4[1];
	bool team1 = false;
	bool team2 = false;
	for(int i = 0; i < p1.size();i++){
		//for all possible configurations of p1 and p2
		for(int j = 0; j < p2.size(); j++){
			int winCount = 0;
			int loseCount = 0;
			//if win count is 2, team1 wins
			for(int k = 0; k < p3.size();k++){
				for(int l = 0; l < p4.size();l++){
					if(i != j && k != l){
						//cout << p1[i] << " " << p2[j] << " " << p3[k] << " " << p4[l] << endl;
						if((p1[i] > p3[k] && p2[j] > p4[l]) || (p2[j] > p4[l] && p1[i] > p3[k])){
							winCount++;
						}
						if((p1[i] < p3[k] && p2[j] < p4[l]) || (p1[i] < p4[l] && p2[j] < p3[k])){
							loseCount++;
						}
					}
				}
			}
			if(winCount == 2){
				team1 = true;
			}else if(loseCount){
				team2 = true;
			}
			//how to detect second player winnign?
		}
	}
	if(team1){
		cout << "Team 1" << endl;
	}else if(team2){
		cout << "Team 2" << endl;
	}else{
		cout << "Draw" << endl;
	}
}
