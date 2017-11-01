#include<iostream>
#include<algorithm>
#include<string>
 
using namespace std;
 
int main()
{
	string _S, T;
	int index = -1;
 
	cin >> _S >> T;
	
	if(_S.size() < T.size()) {
		cout << "UNRESTORABLE" << endl;
		return 0;
	}
 
	for (int i = 0; i <= _S.size() - T.size(); i++) {
		for (int j = 0; j < T.size(); j++) {
			if (_S[i + j] != '?' && _S[i + j] != T[j])
				break;
			if (j == T.size() - 1)
				index = i;
		}
	}
 
	if (index == -1) {
		cout << "UNRESTORABLE" << endl;
		return 0;
	}
 
	for (int i = 0; i < _S.size(); i++) {
		if (i >= index && i < index + T.size()) {
			_S[i] = T[i - index];
		}
		else if (_S[i] == '?')
			_S[i] = 'a';
	}
 
	cout << _S << endl;
 
	return 0;
}
 
 