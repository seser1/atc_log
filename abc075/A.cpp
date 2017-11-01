#include<iostream>
#include<string>
#include<algorithm>
#include <map>  
 
using namespace std;
 
 
int main()
{
	int a, b, c;
 
	cin >> a >> b >> c;
 
	cout << ((a == b) ? c : (b == c) ? a : b) << endl;
 
	return 0;
}
 
 