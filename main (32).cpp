#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int a,b,y,x;
	y=237;
	a=(y/100);
	b=(y%100);
	x=b*10+a;
	cout<<x;
	return 0;
}