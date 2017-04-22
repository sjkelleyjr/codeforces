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
	long long arr[n][1];
	int dead[n];
	for(int i =0 ; i< n;i++){
		long long a;
		cin >> a;
		arr[i][0] = a;
		arr[i][1] = 0;
	}
	for(int i =0 ; i< n;i++){
		int d;
		cin >> d;
		dead[i] = d;
	}
	//1 means destroyed.
	for(int i =0; i < n;i++){
		long long largest = INT_MIN;
		long long count   = 0;
		arr[dead[i]-2][1] = 1;
		cout << "upper: " << endl;
		for(int j = dead[i];j < n;j++){
			cout << arr[j][0] << " ";
			if(arr[j][1] == 0){
				count += arr[j][0]; 
			}
			if(arr[j][1] == 1){
				if(count > largest){
					largest = count;
				}
				count = 0;
			}
		}
		if(count > largest){
			largest = count;
		}
		cout << "LARGEST: " << largest << endl;
		count = 0;
		cout << endl;
		cout << "lower: " << endl;
		for(int j = dead[i]-2;j >= 0;j--){
			cout << arr[j][0] << " ";
			if(arr[j][1] == 0){
				count += arr[j][0];
			}
			if(arr[j][1] == 1){
				if(count > largest){
					largest = count;
					count = 0;
				}else{
					count += arr[j][0];
				}
			}
		}
		if(count > largest){
			largest = count;
		}
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << largest << endl;
	}
}

