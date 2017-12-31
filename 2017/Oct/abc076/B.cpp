#include<iostream>
#include<algorithm>
#include<string>
 
 
using namespace std;
 
 
int main()
{
	int	N, K;
	int total = 1;
 
	cin >> N >> K;
 
 
	for (int i = 0; i < N; i++) {
		if (total <= K)
			total *= 2;
		else
			total += K;
	}
 
	cout << total << endl;
 
 
	return 0;
}
 
 