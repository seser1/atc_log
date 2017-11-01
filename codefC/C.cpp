#include<iostream>
#include<algorithm>
#include<string>
 
 
using namespace std;
 
 
int main()
{
	int size_x, count=0, f, e;
	string s, x;
	x = "x";
	cin >> s;
	string s_x(s);
	string::size_type pos = s_x.find(x);
	while (pos != string::npos) {
		s_x.replace(pos, x.size(), "");
		pos = s_x.find("x", pos);
	}
 
	size_x = s_x.size();
	f = 0;
	e = s.size() - 1;
	if (s.size() == 1){ cout << 0 << endl; return 0;}
	for (int i = 0; i < (size_x + 1) / 2; i++) {
		if(s_x[i] != s_x[size_x -1-i]) { cout << -1 << endl; return 0; }
 
		while (s[f] != s_x[i] || s[e] != s_x[i]) {
			if (s[f] == 'x' && s[e] == 'x') { f++; e--; }
			else if (s[f] == 'x') { f++; count++; }
			else if (s[e] == 'x') { e--; count++; }
		}
		f++; e--;
 
	}
 
	cout << count << endl;
 
	return 0;
}
 
 