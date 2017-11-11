#include<iostream>
#include<string>
#include<algorithm>
#include <map>  
#include <string.h>
#include <math.h>
 
using namespace std;
 
char x, y;
 
int main()
{	
	cin >> x >> y;
 
	if ((int)x > (int)y)cout << ">" << endl;
	if ((int)x == (int)y)cout << "=" << endl;
	if ((int)x < (int)y)cout << "<" << endl;
 
	return 0;
}