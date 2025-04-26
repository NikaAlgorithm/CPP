// question number 368488

#include <iostream>

using namespace std;

int main(){

	int n, a, b;
	cin >> n >> a >> b;

	int result;
	
	if (a + 1 >= n - b){
		result = a + 1;
	}
	if (a + 1 < n - b){
		result = n -b;
	}

	result = n - result + 1;

	cout << result << endl;

	return 0;

}

