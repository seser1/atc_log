#include<iostream>
#include<string>
#include<algorithm>
#include <map>  
#include <string.h>
 
using namespace std;
 
 
 
 
int main()
{
 
	string l1, l2;
	cin >> l1 >> l2;
 
	if (l1[0] == l2[2] && l1[1] == l2[1] && l1[2] == l2[0]) {
		cout << "YES" << endl;
		return 0;
	}
 
	cout << "NO" << endl;
 
	return 0;
}