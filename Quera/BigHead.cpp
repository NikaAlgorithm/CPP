#include <iostream>

using namespace std;

int main(){

	int n;
	cin >> n;

	int first = n % 10;

	while (n >= 1){

		n = n / 10;
		if (first < n % 10){
			cout << "NO" << endl;
			n = -2;
		}

	}

	if (n != -2){
		cout << "YES" << endl;
	}
}
