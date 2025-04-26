#include <iostream>

using namespace std;

int main(){

	int t, s, x;
	cin >> t >> s >> x;
	
	if (x == t) {
		cout << "YES" << endl;
	}

	else if (x < t + s) {
		cout << "NO" << endl;
	}

	else {
		int res = x - t;
		if (res % s == 0 or (res - 1) % s == 0) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
}
