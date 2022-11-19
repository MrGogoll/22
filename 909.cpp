#include <string>
#include <vector>
#include <iostream>
using namespace std;
int main()
{
	string s;
	cin >> s;
	cout << s << endl;
	int n = s.length();
	if (n % 2 == 0) {
		cout << s;
	}
}

