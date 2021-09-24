#include<iostream>
#include<math.h>

using namespace std;

int main() {
float a,b,c,P,S,d;
cin >> a >> b >> c;
P = a + b + c;
d = (a + b + c)/2;
S = sqrt(d*(d-a)*(d-b)*(d-c));
	if ((a + b > c) && (b + c > a) && (a + c > b)) {
		cout << P << " " << S << endl;
	} else {
		cout << "NO";
	}
return 0;
	}
