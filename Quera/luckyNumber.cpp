//Problem number 39439

#include <iostream>

using namespace std;

int main(){
	int n; 
	cin >> n;
	

	while (n >= 1){
			
		int r = n % 10;
		if (r == 4 or r == 7){
			n = n / 10;
		}
		
		


		else{
			n = -2;
			cout << "NO" << endl;
		}

	
	}

	if (n != -2){
		cout << "YES" << endl;
	}
}
