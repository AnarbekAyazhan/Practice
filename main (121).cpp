#include <iostream> 
using namespace std;
int main() {
	string s;;
	int count=0;
	getline(cin,s);
	for (int i=0;i<s.length();i++) {
		if (s[i]%2==0) {
			count++;
		}
		s.length()==s.length()/10;
	}
	cout<<count;
	return 0;
}
