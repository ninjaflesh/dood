#include <iostream>
#include <string>
using namespace std;
void func(string str, int &a, int &u, int &e, int &o, int &y, int &ai) {
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
			ai++;
		}
	}
}

int main() {
	string in_str;
	cin>>in_str;
	int a=0, u=0, e=0, o=0, y=0, ai=0;
	func(in_str, a, u, e, o, y, ai);
	cout<<"a- "<<a<<" u- "<<u<<" e- "<<e<<" o- "<<o<<" y- "<<y<<" i- "<<ai<<endl;
	cout<<"All- "<<a+u+e+o+y+ai<<endl;
	return 0;
}
