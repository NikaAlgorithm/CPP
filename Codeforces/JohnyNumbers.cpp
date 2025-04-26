#include <iostream>

using namespace std;

int main(){

	int n, k;
	cin >> n >> k;
	int result = k - (n % k) + n;
	cout << result << endl;

}

