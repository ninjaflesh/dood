#include <iostream>
#include <string>
using namespace std;
int main() {
	string str;
	int a=0, u=0, e=0, o=0, y=0, ii=0;
	getline(cin, str);
	for (int i=0; i<str.length(); i++) {
		if (str[i]=='a') {
			a++;
		} else if (str[i]=='u') {
			u++;
		}
		if (str[i]=='e') {
			e++;
		} else if (str[i]=='o') {
			o++;
		}
		if (str[i]=='y') {
			y++;
		} else if(str[i]=='i') {
			ii++;
		}
	}

	cout<<" a="<<a<<" u="<<u<<" e="<<e<<" o="<<o<<" y="<<y<<" i="<<ii<<endl;
	return 0;
}
