#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include <string.h>
#include <math.h>

using namespace std;

string c = "ABXY", s;

void ch(string *str, string cc) {
	string to = "r";
	string::size_type pos = str->find(cc);
	while (pos != string::npos) {
		str->replace(pos, cc.size(), to);
		pos = str->find(cc, pos + to.size());
	}
}

int num(string in) {
	string s1, s2;
	s1 = s2 = s;

	ch(&s1, in.substr(0, 2));
	ch(&s1, in.substr(2, 2));

	ch(&s2, in.substr(2, 2));
	ch(&s2, in.substr(0, 2));

	return min(s1.size(), s2.size());
}

int g(string str) {
	if (str.size() == 4)return num(str);

	int tmp = 1000;
	for (int i = 0; i < 4; i++) 
			tmp = min(g(str + c[i]), tmp);
	return tmp;
}

int main()
{
	int n, min=1000;

	cin >> n;
	cin >> s;
	cout << g("") << endl;

	return 0;
}
