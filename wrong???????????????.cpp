#include<math.h>
#include<iostream>

using namespace std;

int main() {
	
float a;
long long b;
	cin >> a >> b;
	for (int i = 1; i <= b; i++) {
		a = round(a) + i;
	}	
	cout << a;
}
