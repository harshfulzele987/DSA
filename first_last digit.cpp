#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		long int n;
		cin >> n;
		int l = n%10;

		while (n >= 10) {
			n /= 10;
		}

		cout << l+n << endl;
	}
	return 0;
}
