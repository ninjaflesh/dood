#include<iostream>
#include <cctype>
#include <string>
using namespace std;

void registr(string& s) {
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'A' || s[i] == 'O' || s[i] == 'E' || s[i] == 'Y' || s[i] == 'U' || s[i] == 'I') {
			s[i] = tolower(s[i]);
		}
	}
}

int main() {
	string str;
	getline(cin, str);
	register(srt);
	cout << str << endl;
	return 0;
}