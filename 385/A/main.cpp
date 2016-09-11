#include <iostream>

using namespace std;

int main(){
	int n,c;
	cin >> n;
	cin >> c;
	int arr[n];
	for(int i = 0; i<n;i++){
		int barrelVal;
		cin >> barrelVal;
		arr[i] = barrelVal;
	}
	int max = 0;
	for(int i = 1; i<n;i++){
		int diff = arr[i-1] - arr[i];
		if( diff > max){
			max = diff;
		}
	}
	if( max > c ){
		cout << max - c;
	}else{
		cout << 0;
	}
}
