#include <iostream>

using namespace std;


int main(){

	int n;
	cin >> n;

	int num = 0;

	while (n >= 1){

		int r = n % 10;

		if (r == 4 or r == 7){
			num++;
		}

		n = n / 10;
	}

	if (num == 4 or num == 7){
		cout << "YES" << endl;
	}

	else{
		cout << "NO" << endl;
	}
}
