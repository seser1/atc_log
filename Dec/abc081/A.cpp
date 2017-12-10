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
	int tmp = 0;
	cin >> s;
	for (int i = 0; i < 3; i++)
		if (s[i] == '1')tmp++;
 
	cout << tmp << endl;
 
	return 0;
}