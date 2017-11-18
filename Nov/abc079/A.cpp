#include<iostream>
#include<string>
#include<algorithm>
#include <map>  
#include <string.h>
#include <math.h>
 
using namespace std;
 
int main()
{	
 
	int count=0;
	string s;
	cin >> s;
 
	for (int i = 1; i < 4; i++) {
		if (s[i-1] == s[i])count++;
		else count = 0;
		if (count == 2) {
			cout << "Yes" << endl;
			return 0;
		}
	}
 
	cout << "No" << endl;
	return 0;
}