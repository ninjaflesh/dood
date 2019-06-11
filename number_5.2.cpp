#include <iostream>
#include <string>
using namespace std;

int* func(string str) {
	int mas[6];
	for (int i = 0; i < 6; i++) {
		mas[i] = 0;
	}
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'a') {
			mas[0]++;
		}
		else if (str[i] == 'u') {
			mas[1]++;
		}
		if (str[i] == 'e') {
			mas[2]++;
		}
		else if (str[i] == 'o') {
			mas[3]++;
		}
		if (str[i] == 'y') {
			mas[4]++;
		}
		else if (str[i] == 'i') {
			mas[5]++;
		}
	}
	return mas;
}

int main() {
	bool value = true;
	char symbol[] = { 'a', 'u', 'e', 'o', 'y', 'i' };
	int test_1[6], test_2[6], test_3[6];
	int a[] = { 2, 3, 0, 0, 0, 0 };
	int b[] = { 1, 2, 3, 4, 5, 6 };
	int c[] = { 0, 0, 0, 0, 0, 0 };
	for (int i = 0; i < (sizeof(symbol) / sizeof(symbol[0])); i++) {
		test_1[i] = *(func("ae ae ae") + i);
		test_2[i] = *(func("") + i);
		test_3[i] = *(func("aioioeurgi aogad aauifg i ayqa") + i);
	}
	for (int i = 0; i < (sizeof(symbol) / sizeof(symbol[0])); i++) {
		if (test_1[i] != a[i] || test_2[i] != b[i] || test_3[i] != c[i]) {
			value = false;
		}
	}
	if (!value) {
		cout << "problem" << endl;
		return 1;
	}
	else {
		cout << "it`s working" << endl;
	}
	return 0;
}
