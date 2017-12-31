#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include <string.h>
#include <math.h>
 
using namespace std;
 
 
int main()
{
	string s;
	int n, f=0;
	cin >> s;
	n = stoi(s);
	for (int i = 0; i < s.size(); i++)f += s[i]-'0';
	if (n%f == 0)cout << "Yes" << endl;
	else cout << "No" << endl;
 
	return 0;
}