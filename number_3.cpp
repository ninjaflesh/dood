#include<iostream>
#include <cctype>
#include <string>
using namespace std;

int main() {
	string str;
	getline(cin, str);
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'A' || str[i] == 'O' || str[i] == 'E' || str[i] == 'Y' || str[i] == 'U' || str[i] == 'I')
			str[i] = tolower(str[i]);
	}
	cout << str << endl;
	return 0;
}