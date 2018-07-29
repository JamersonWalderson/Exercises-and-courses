#include <iostream>
using namespace std;
/* 2 números em ordem crescente */

int main(int argc, char** argv) {
	int a, b;
	cin >> a >> b;
	if (a < b) {
		cout << a << " " << b;
	} else {
		cout << b << " " << a;
	}	
	return 0;
}