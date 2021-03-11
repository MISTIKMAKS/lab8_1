#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int CountB(char* str)
{
	if (strlen(str) < 1) {
		return 0;
	}
	int b = 0;
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == 'B') {
			b++;
		}
	}
	return b;
}
int CountA(char* str)
{
	if (strlen(str) < 1) {
		return 0;
	}
	int a = 0;
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == 'A') {
			a++;
		}
	}
	return a;
}
int CountS(char* str)
{
	if (strlen(str) < 1) {
		return 0;
	}
	int s = 0;
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == 'S') {
			s++;
		}
	}
	return s;
}
int CountI(char* str)
{
	if (strlen(str) < 1) {
		return 0;
	}
	int ia = 0;
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == 'I') {
			ia++;
		}
	}
	return ia;
}
int CountC(char* str)
{
	if (strlen(str) < 1) {
		return 0;
	}
	int c = 0;
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == 'C') {
			c++;
		}
	}
	return c;
}
char* Change(char* str)
{
	if (strlen(str) < 1) {
		return str;
	}
	char* tmp = new char[strlen(str) * 4 / 3 + 1];
	char* t = tmp;
	tmp[0] = '\0';
	int i = 0;
	while (str[i + 4] != 0)
	{
		if (str[i] == 'B' && str[i + 1] == 'A' && str[i + 2] == 'S' && str[i + 3] == 'I' && str[i + 4] == 'C')
		{
			strcat(t, "Delphi");
			t += 6;
			i += 5;
		}
		else
		{
			*t++ = str[i++];
			*t = '\0';
		}
	}
	*t++ = str[i++];
	*t++ = str[i++];
	*t++ = str[i++];
	*t++ = str[i++];
	*t = '\0';
	strcpy(str, tmp);
	return tmp;
}
int main()
{
	char str[101];
	cout << "Enter string:" << endl;
	cin.getline(str, 100);
	cout << "String contained " << CountB(str) << " B " << CountA(str) << " A " << CountS(str) << " S " << CountI(str) << " I " << CountC(str) << " C " << endl;
	char* dest = new char[151];
	dest = Change(str);
	cout << "Modified string (param) : " << str << endl;
	cout << "Modified string (result): " << dest << endl;
	return 0;
}
