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
	int a[n];
	long total(0), currentY(0), minY(1e6), maxY(-1e6); 
	for(int i = 0; i<n;i++){
		int a_i;
		cin >> a_i;
		a[i] = a_i;
		total += a_i;
		currentY += ((i%2) ? -1 : 1) * a_i;
		if(currentY < minY){
			minY = currentY;
		}
		if(currentY > maxY){
			maxY = currentY;
		}
		
	}
	if(minY > 0) minY = 0;
	if(maxY < 0) maxY = 0;
	string line;
	for(long i = 0; i<total;i++){
		line += ' ';
	}
	vector<string> cardio(maxY - minY, line);
	long x(0), y(0);
	for(int i = 0; i< n;i++){
		if(i%2){
			for(int j = 0; j < a[i];j++){
				cardio[-minY + --y][x++] = '\\';
			}
		}else{
			for(int j = 0; j < a[i];j++){
				cardio[-minY + y++][x++] = '/';
			}

		}
	}
	for(long i = cardio.size()-1; i >= 0; i--){
		cout << cardio[i] << endl;
	}
}
